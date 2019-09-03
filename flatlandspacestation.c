// https://www.hackerrank.com/challenges/flatland-space-stations/problem

#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int n, m;
    scanf(" %d%d", &n, &m);

    int arr[m], i;

    int temp;
    for (i = 0; i < m; i++)
    {
        scanf(" %d", &temp);

        arr[i] = temp + 1;
    }

    qsort(arr, m, sizeof(int), cmpfunc);

    int max = 0;

    if (arr[0] != 1)
    {
        max = arr[0] - 1;
    }

    if (arr[m - 1] != n)
    {
        if (max < n - arr[m - 1])
        {
            max = n - arr[m - 1];
        }
    }

    int prev = 0;

    for (i = 0; i < m - 1; i++)
    {
        int inBetween = arr[i + 1] - arr[i] - 1;

        if (inBetween > prev)
        {
            int tempMax = 0;

            if (inBetween % 2 == 0)
            {
                tempMax = inBetween / 2;
            }
            else
            {
                tempMax = (inBetween / 2) + 1;
            }

            if (max < tempMax)
            {
                max = tempMax;
            }
        }

        prev = inBetween;
    }

    printf("%d\n", max);

    return 0;
}