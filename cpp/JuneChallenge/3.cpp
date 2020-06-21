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

ll t, n;
short c[1001], i, need;
vec<ll> have(2);

int main(void) {
    // fastIO;
    cin >> t;

    while (t--) {
        cin >> n;

        i = 0;
        loop(i, n - 1) cin >> c[i];

        fill(all(have), 0);
        i = 0;
        loop(i, n - 1) {
            need = c[i] - 5;

            if (need == 10) {
                if (have.at(1) >= 1)
                    have.at(1)--, need -= 10;
                else if (have.at(0) >= 1)
                    have.at(0)--, need -= 5;
            }

            if (need == 5) {
                if (have.at(0) != 0)
                    have.at(0)--, need -= 5;
            }

            if (need != 0)
                break;
            else {
                if (c[i] == 10)
                    have.at(1)++;
                else if (c[i] == 5)
                    have.at(0)++;
            }
        }

        if (i == n)
            cout << "YES";
        else
            cout << "NO";

        cout << nl;
    }
}
