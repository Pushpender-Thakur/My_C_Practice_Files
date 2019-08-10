// https://www.hackerrank.com/challenges/bigger-is-greater/problem

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str[101];
        scanf(" ");
        scanf("%s", str);
        int length = strlen(str);
        int isPossible = 0;
        int left = -1, right = length - 1;
        int i = right, j;

        while (i >= left)
        {
            for (j = i - 1; j > left; j--)
            {
                if (str[i] > str[j])
                {
                    left = j;
                    right = i;
                    isPossible = 1;
                    break;
                }
            }

            i--;
        }

        if (isPossible != 0)
        {
            int temp = str[left];
            str[left] = str[right];
            str[right] = temp;

            int tempChar[length - left - 1];
            int index = 0;

            for (i = left + 1; i < length; i++)
            {
                tempChar[index] = str[i];
                index++;
            }

            qsort(tempChar, length - left - 1, sizeof(int), cmpfunc);

            for (i = 0; i <= left; i++)
            {
                printf("%c", str[i]);
            }

            for (i = 0; i < index; i++)
            {
                printf("%c", tempChar[i]);
            }
        }

        if (isPossible == 0)
        {
            printf("no answer");
        }

        printf("\n");
    }
    return 0;
}