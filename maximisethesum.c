// https://www.codechef.com/problems/NOMATCH

#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main(void)
{
    int t;
    scanf(" %d", &t);
    while (t--)
    {
        int n, i;
        scanf(" %d", &n);
        long long int arr[n];
        for (i = 0; i < n; i++)
        {
            scanf(" %lld", &arr[i]);
        }

        qsort(arr, n, sizeof(long long int), cmpfunc);

        long long int sum = 0;

        for (i = 0; i < n / 2; i++)
        {
            long long int temp = arr[n - i - 1] - arr[i];
            if (temp < 0)
            {
                temp = -temp;
            }

            sum += temp;
        }

        printf("%lld\n", sum);
    }
    return 0;
}