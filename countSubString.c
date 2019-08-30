// https://www.codechef.com/problems/CSUB

#include <stdio.h>
int main(void)
{
    long long int t;
    scanf(" %lld", &t);
    while (t--)
    {
        long long int n, i;
        scanf(" %lld", &n);
        char str[n + 1];
        scanf(" %s", str);
        long long int count1 = 0;
        for (i = 0; i < n; i++)
        {
            if (str[i] == '1')
            {
                count1++;
            }
        }

        printf("%lld", (count1 * (count1 + 1)) / 2);

        if (t != 0)
        {
            printf("\n");
        }
    }
    return 0;
}