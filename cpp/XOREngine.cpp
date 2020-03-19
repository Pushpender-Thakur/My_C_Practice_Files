// https://www.codechef.com/MARCH20B/problems/ENGXOR

#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int t, n, q, odd;
int arr[100001];

int main(void)
{
    scanf(" %d", &t);

    while (t--)
    {
        scanf(" %d%d", &n, &q);
        odd = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf(" %d", &arr[i]);

            if (__builtin_popcount(arr[i]) % 2)
            {
                odd++;
            }
        }

        int w;
        while (q--)
        {
            scanf(" %d", &w);

            if (__builtin_popcount(w) % 2 == 0)
            {
                printf("%d %d\n", n - odd, odd);
            }
            else
            {
                printf("%d %d\n", odd, n - odd);
            }
        }
    }
}