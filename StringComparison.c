#include <stdio.h>
int main (void)
{
    char LeftString[100],RightString[100];
    int i;
    int Result = 0;
    printf("Enter First String:- ");
    gets(LeftString);
    printf("Enter Second String:- ");
    gets(RightString);
    

    for(i = 0; LeftString[i] != '\0' || RightString[i] != '\0'; i++)
    {
        if (LeftString[i] != RightString[i])
        {
            Result = LeftString[i] - RightString[i];
            break;
        }
    }

    if (Result == 0)
    {
        printf("Strings Are Equal!!");
    }
    else if (Result > 0)
    {
        printf("Strings Are UnEqual by %d",Result);
    }
    else
    {
        printf("Strings Are UnEqual by %d",Result);
    }


    
    return 0;
}