// https://www.hackerrank.com/challenges/lisa-workbook/problem

#include <stdio.h>
int main(void)
{
    int size, k, i;
    scanf(" %d%d", &size, &k);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        scanf(" %d", &arr[i]);
    }

    int specialCounts = 0;

    int pageNo = 1;

    for (i = 0; i < size; i++)
    {
        int s = arr[i] / k;
        int r = arr[i] % k;
        int x, prev = 0;
        if (s * k >= pageNo)
        {
            for (x = 1; x <= s; x++)
            {
                int current = x * k;
                if (prev < pageNo && current >= pageNo)
                {
                    specialCounts++;
                }

                prev = current;
                pageNo++;
            }
        }
        else
        {
            pageNo += s;
            prev = s * k;
        }

        if (r != 0)
        {
            if (prev < pageNo && arr[i] >= pageNo)
            {
                specialCounts++;
            }
            pageNo++;
        }
    }

    printf("%d\n", specialCounts);
    return 0;
}