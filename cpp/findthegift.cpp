// https://www.codechef.com/COOK116B/problems/GIFTSRC

#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int t, r, c;
string str;
int len;

void update(char a)
{
    if (a == 'L')
        r--;
    else if (a == 'R')
        r++;
    else if (a == 'U')
        c++;
    else if (a == 'D')
        c--;
}

int main(void)
{
    cin >> t;

    while (t--)
    {
        cin >> r >> str;

        len = str.length();

        r = c = 0;

        update(str[0]);

        for (int i = 1; i < len; ++i)
        {
            if ((str[i] == 'L' || str[i] == 'R') && (str[i - 1] != 'L' && str[i - 1] != 'R'))
                update(str[i]);
            else if ((str[i] == 'U' || str[i] == 'D') && (str[i - 1] != 'U' && str[i - 1] != 'D'))
                update(str[i]);
        }

        cout << r << " " << c << "\n";
    }
}