// https://www.codechef.com/FEB20B/problems/SNUG_FIT

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int t, n, i;
long long s;
int a[10001], b[10001];

int main(void)
{
    cin >> t;
    while (t--)
    {
        cin >> n;

        for (i = 0; i < n; ++i)
            cin >> a[i];

        for (i = 0; i < n; ++i)
            cin >> b[i];

        sort(a, a + n);
        sort(b, b + n);

        s = 0;

        for (i = 0; i < n; ++i)
            s += (a[i] < b[i] ? a[i] : b[i]);

        cout << s << endl;
    }
}