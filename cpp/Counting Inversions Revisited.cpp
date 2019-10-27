// https://www.codechef.com/LTIME77B/problems/INVYCNT

#include <iostream>
#include <bits/stdc++.h>
#define s std::
#define lli long long int

int main(void)
{
    int t;

    s cin >> t;

    while (t--)
    {
        lli n, k;

        s cin >> n >> k;

        lli arr[n];

        for (lli i = 0; i < n; i++)
        {
            s cin >> arr[i];
        }

        lli count = 0;

        lli before, after;

        for (lli i = 0; i < n; i++)
        {
            before = 0;
            after = 0;
            for (lli j = 0; j < i; j++)
            {
                if (arr[i] > arr[j])
                {
                    before++;
                }
            }

            for (lli j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    after++;
                }
            }

            count += before * ((k - 1) * (k) / 2) + after * ((k * (k + 1)) / 2);
        }

        s cout << count << s endl;
    }
}