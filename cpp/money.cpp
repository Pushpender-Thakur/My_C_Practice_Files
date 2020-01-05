// https://www.codechef.com/problems/DWW19I

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    unsigned int t, n, min, i, temp;
    unsigned long long int sum;
    cin >> t;

    while (t--)
    {
        cin >> n >> min;

        sum = min;

        for (i = 1; i < n; ++i)
        {
            cin >> temp;

            min = __gcd(temp, min);

            sum += temp;
        }

        cout << min << " " << sum / min << endl;
    }
}