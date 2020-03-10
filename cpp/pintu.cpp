// https://www.codechef.com/MARCH20B/problems/CHPINTU

#include <iostream>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

int t, m, n, f[51], minPrice;

int main(void)
{
    cin >> t;

    while (t--)
    {
        cin >> n >> m;

        for (int i = 0; i < n; ++i)
        {
            cin >> f[i];
        }

        int p[51] = {};

        for (int i = 0; i < n; ++i)
        {
            cin >> minPrice;

            p[f[i]] += minPrice;
        }

        minPrice = INT_MAX;

        for (int i = 0; i < n; ++i)
        {
            if (p[f[i]] < minPrice)
                minPrice = p[f[i]];
        }

        cout << minPrice << endl;
    }
}