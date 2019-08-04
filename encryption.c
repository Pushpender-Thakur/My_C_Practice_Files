// https://www.hackerrank.com/challenges/encryption/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
int main (void)
{
    char str[82];
    scanf("%s",str);
    int length = strlen(str);
    int row = pow(length,0.5);
    float col = pow(length,0.5);
    if (col - (int)col != 0)
    {
        col = row + 1;
    }

    if (col * row < length)
    {
        row = col;
    }

    int i,j;

    for (i = 0; i < col;i++)
    {
        for (j = 0; j < row; j++)
        {
            int pos = i + j * col;
            if (pos < length)
            {
                printf("%c",str[pos]);
            }
            else
            {
                break;
            }
            
        }

        printf(" ");
    }

    printf("\n");
    return 0;

}