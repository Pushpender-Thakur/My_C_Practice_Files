// https://www.codechef.com/COWR2020/problems/COWA19F

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t, i, len;
    string str;

    cin >> t;

    while (t--)
    {
        cin >> str;

        int count[26] = {};

        len = str.length();

        for (i = 0; i < len; ++i)
            count[str[i] - 97]++;

        char temp;

        for (i = 25; i >= 0; --i)
        {
            temp = 97 + i;
            while (count[i])
            {
                cout << temp;
                count[i]--;
            }
        }

        cout << endl;
    }
}