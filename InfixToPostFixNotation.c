#include <stdio.h>
#include <string.h>
char Exp[50];
char Optr[50];
int ExpIndex = -1;
int OptrIndex = 0;

// Flag = 1 means Exp
// Flag = 0 means Optr

int push(int flag, char value)
{
    if (flag == 1)
    {
        if (ExpIndex != 48)
        {
            ExpIndex++;
            Exp[ExpIndex] = value;
            Exp[ExpIndex + 1] = '\0';
            return 0;
        }
    }
    else
    {
        if (OptrIndex != 48)
        {
            OptrIndex++;
            Optr[OptrIndex] = value;
            Optr[OptrIndex + 1] = '\0';
            return 0;
        }
    }
}

char pop(int flag)
{
    if (flag == 1)
    {
        if (ExpIndex != -1)
        {
            char temp = Exp[ExpIndex];
            Exp[ExpIndex] = '\0';
            ExpIndex--;
            return temp;
        }
    }
    else
    {
        if (OptrIndex != 0)
        {
            char temp = Optr[OptrIndex];
            Optr[OptrIndex] = '\0';
            OptrIndex--;
            return temp;
        }
    }
}

int main(void)
{
    Exp[0] = '\0';
    Optr[0] = '(';
    Optr[1] = '\0';
    char str[48];
    scanf(" %[^\n]%*c", str);
    int length = strlen(str);
    str[length] = ')';
    str[length + 1] = '\0';
    length++;

    int i;
    for (i = 0; i < length; i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        else if (str[i] == '+' || str[i] == '-')
        {
            while (Optr[OptrIndex] != '(')
            {
                push(1, pop(0));
            }

            push(0, str[i]);
        }
        else if (str[i] == '*' || str[i] == '/' || str[i] == '%')
        {
            while (Optr[OptrIndex] != '(' && Optr[OptrIndex] != '+' && Optr[OptrIndex] != '-')
            {
                push(1, pop(0));
            }

            push(0, str[i]);
        }
        else if (str[i] == '^')
        {
            while (Optr[OptrIndex] != '(' && Optr[OptrIndex] != '+' && Optr[OptrIndex] != '-' && Optr[OptrIndex] != '*' && Optr[OptrIndex] != '/' && Optr[OptrIndex] != '%')
            {
                push(1, pop(0));
            }

            push(0, str[i]);
        }
        else if (str[i] == ')')
        {
            while (Optr[OptrIndex] != '(')
            {
                push(1, pop(0));
            }

            pop(0);
        }
        else if (str[i] == '(')
        {
            push(0, str[i]);
        }
        else
        {
            push(0, str[i]);
        }
    }

    printf("%s\n", Exp);

    return 0;
}