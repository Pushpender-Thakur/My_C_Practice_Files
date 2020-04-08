// https://www.codechef.com/APRIL20B/problems/COVIDLQ

#include <bits/stdc++.h>
using namespace std;
#define rep(k, n) for (int i = k; i < n; ++i)

int t, n;
bool spot[101];

int main(void)
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int p = -1;

        rep(0, n)
        {
            cin >> spot[i];
            if (spot[i] && p == -1)
                p = i;
        }

        bool f = 1;
        int dist = 0;

        rep(p + 1, n)
        {
            dist++;
            if (spot[i])
            {
                if (dist < 6)
                {
                    f = 0;
                    break;
                }
                dist = 0;
            }
        }

        cout << (f ? "YES\n" : "NO\n");
    }
}