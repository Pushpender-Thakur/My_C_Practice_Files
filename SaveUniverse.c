#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ShieldPower;
char string[30];
int LengthofString;
int RoBoStrength = 1;
int Hacks = 0;
int TestNo = 0;

int ExpectedDamage();
void Swapping (int A,int B);
int Hacking();
int Result();
int Impossible();


int main (void)
{
    int TestCases;
    scanf("%d",&TestCases);
    int i;
    int t;
    
    //int Cs = 0;
    for (i = 0; i < TestCases; i++)
    {
        int Ss = 0;
        TestNo++;
        Hacks = 0;
        fflush(stdin);
        scanf("%d %[^\n]%*c",&ShieldPower,string);
        LengthofString = strlen(string);
        for (t = 0; t < LengthofString; t++)
        {
            if (string[t] == 'S')
            {
                Ss = Ss + 1;
            }
        }
        
        if (Ss == LengthofString && ExpectedDamage() > ShieldPower)
        {
            printf("Case #%d: IMPOSSIBLE\n",TestNo);
        }
        else
        {
            Result();
        }
        
        
    }
}

int ExpectedDamage ()
{
    int i;
    int ExpectedDamage = 0;
    RoBoStrength = 1;
    for (i = 0; i < LengthofString; i++)
    {
        if (string[i] == 'S')
        {
            ExpectedDamage = ExpectedDamage + RoBoStrength;
        }
        else if (string[i] == 'C')
        {
            RoBoStrength = 2 * RoBoStrength;
        }
        
    }

    return ExpectedDamage;
}

void Swapping (int A,int B)
{
    char temp;
    temp = string[A];
    string[A] = string[B];
    string[B] = temp;
    //printf("%s",string);
    Hacks++;
    //Result();
}

int Hacking ()
{
    int i = LengthofString - 1;
    for (i; i >= 1; i--)
    {
        if (string[i] == 'S' && string[i - 1] == 'C')
        {
            Swapping(i,i - 1);
            Result();
            return 0;
        }
        
    }
    
}

int Result ()
{
    // printf("%d\n",ExpectedDamage());
    // printf("%d\n",RoBoStrength);
    if (ExpectedDamage() > ShieldPower)
    {
        Hacking();
        return 0;

    }
    else
    {
        printf("Case #%d: %d\n",TestNo,Hacks);
    }
    
}
