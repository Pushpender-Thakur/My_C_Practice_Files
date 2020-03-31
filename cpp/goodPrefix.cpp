// https://www.codechef.com/LTIME82B/problems/PRFXGD

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string str;
int t, n, x, k, countPrefixes;

int main(void)
{
    cin >> t;

    while (t--)
    {
        cin >> str >> k >> x;

        countPrefixes = 0;

        int arr[26] = {};

        for (int i = 0; str[i] != '\0'; ++i)
        {
            if (arr[str[i] - 97] + 1 > x)
            {
                if (k == 0)
                    break;
                else
                    k--;
            }
            else
            {
                arr[str[i] - 97]++;
                countPrefixes++;
            }
        }

        cout << countPrefixes << endl;
    }
}