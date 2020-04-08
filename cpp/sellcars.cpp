// https://www.codechef.com/APRIL20B/problems/CARSELL

#include <bits/stdc++.h>
using namespace std;
#define rep(k, n) for (int i = k; i < n; ++i)
#define ll long long

/* ------------------------------- */
/* ------------------------------- */

const int mod = 1e9 + 7;
short t;
int n;
ll price[100001];
ll profit;

/* ------------------------------ */
/* ------------------------------ */

// Compare function
bool comp(ll &a, ll &b)
{
    return a > b;
}

int main(void)
{
    cin >> t;
    while (t--)
    {
        cin >> n;

        // Inputing Prices
        rep(0, n)
        {
            cin >> price[i];
        }

        profit = 0;

        // Track how many year Passed
        int ct = 0;

        // Sort Price Array in DECENDING order
        sort(price, price + n, comp);

        rep(0, n)
        {
            if (price[i] - ct > 0)
            {
                profit = (profit + price[i] - ct) % mod;
            }
            else
                break;
            ct++;
        }

        cout << profit << endl;
    }
}