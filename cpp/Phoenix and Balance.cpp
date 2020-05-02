// https://codeforces.com/contest/1348/problem/A

#include <iostream>
#include <numeric>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

typedef unsigned long long ull;
typedef long long ll;

#define vec vector
#define str string
#define it iterator
#define log(x) cout << #x << ": " << x << "\n"
#define loop(start, end) for (start; start <= end; ++start)
#define nl "\n"
#define all(x) x.begin(), x.end()
#define pb push_back
#define mk make_pair
#define mod 1000000007
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;


/* ------------------------------------------------ */
/* ------------------------------------------------ */

ull poww[31] = {};

ull po(int n)
{
    if (n == 1)
        return poww[n] = 2;
    else
        return poww[n] = 2 * po(n - 1);
}

int main (void) 
{
    po(30);
    ull sum[2];
    int t,n;
    bool f;
    cin >> t;
    while(t--)
    {
        cin >> n;
        sum[0] = sum[1] = 0;
        sum[0] = poww[n];
        int h = n / 2 - 1;

        while (h != 0)
        {
            sum[0] += poww[h];
            h--;
        }
        
        for (int i = n / 2; i < n; ++i)
            sum[1] += poww[i];

        cout << sum[0] - sum[1] << nl;
    }

}