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

ll t, ans, i;
string s(10001, '0');

int main(void) {
    cin >> t;
    while (t--) {
        cin >> s;
        ans = i = 0;

        while (s[i] != '\0') {
            if (s[i] == s[i + 1] or s[i + 1] == '\0') {
                i++;
            } else {
                i += 2;
                ans++;
            }
        }
        cout << ans << nl;
    }
}
