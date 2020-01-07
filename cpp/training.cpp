#include <iostream>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(void)
{
    long long int t, i, n, p, j;
    long long int temp, min;

    cin >> t;

    for (j = 1; j <= t; ++j)
    {
        cin >> n >> p;

        long long int s[n], sum[n + 1];

        for (i = 0; i < n; ++i)
        {
            cin >> s[i];
        }

        sort(s, s + n);

        sum[0] = 0;

        for (i = 0; i < n; ++i)
        {
            sum[i + 1] = sum[i] + s[i];
        }

        min = LLONG_MAX;
        temp = 0;

        for (i = n - 1; i >= p - 1; --i)
        {
            temp = (s[i] * (p - 1)) - (sum[i] - sum[i - (p - 1)]);

            //cout << temp << endl;

            if (temp < min)
            {
                min = temp;
            }
        }

        cout << "Case #" << j << ": " << min << endl;
    }
}