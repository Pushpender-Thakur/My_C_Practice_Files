// https://www.codechef.com/COOK116B/problems/MYSARA

#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#define MOD 1000000007

using namespace std;

short t;
int n;
long b[50001];
long long occur;

long long power(long long q)
{
    long long ans = 1;

    for (long long i = 0; i < q; ++i)
        ans = (ans * 2) % MOD;

    return ans;
}

int main(void)
{
    cin >> t;

    while (t--)
    {
        cin >> n;

        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        occur = 1;
        long long temp;

        for (int i = 1; i < n; ++i)
        {
            if (b[i] < b[i - 1])
            {
                occur = 0;
                break;
            }

            occur = (occur * power(__builtin_popcountll(b[i] & b[i - 1]))) % MOD;
        }

        cout << occur << endl;
    }
}