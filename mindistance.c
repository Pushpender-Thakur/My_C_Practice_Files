// https://www.hackerrank.com/challenges/minimum-distances/problem

#include <stdio.h>
int main(void)
{
    int size;
    scanf("%d", &size);
    int arr[size];
    int i, min = size, j;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    i = 0;

    while (i < size)
    {
        j = i + 1;
        int index = i;
        while (j < size)
        {
            if (arr[index] == arr[j])
            {
                if (j - index < min)
                {
                    min = j - index;
                }
                index = j;
            }
            j++;
        }

        if (min == 1)
        {
            break;
        }
        i++;
    }

    if (min != size)
    {
        printf("%d", min);
    }
    else
    {
        printf("-1");
    }

    printf("\n");

    return 0;
}