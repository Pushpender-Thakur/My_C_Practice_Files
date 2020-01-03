// https://www.codechef.com/DWWU2019/problems/DWW19H

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    unsigned int t, i, n, limit;
    long long int occur;
    string str;

    cin >> t;

    while (t--)
    {
        cin >> n >> str;

        occur = 0;
        limit = str.length() - 1;

        for (i = 0; i < limit; ++i)
        {
            if (str[i] == 'S' && str[i + 1] == 'S')
                occur++;
        }

        if (str[0] == 'S' && str[limit] == 'S')
        {
            occur = (occur * n) + (n - 1);
        }
        else
        {
            occur = occur * n;
        }

        cout << occur << endl;
    }
}