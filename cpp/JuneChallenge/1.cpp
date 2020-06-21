/* by kiDDieVelo <--- @pushpend3r ---> */

#include <bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;

#define vec vector
#define str string
#define it iterator
#define log(x) cout << #x << ": " << x << "\n"
#define loop(start, end) for (; start <= end; ++start)
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

ll t, n, k, i, ans, temp;

int main(void) {
    fastIO;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        ans = 0;
        i = 0;
        loop(i, n - 1) {
            cin >> temp;
            if (temp > k)
                ans += (temp - k);
        }
        cout << ans << nl;
    }
}
