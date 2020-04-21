/* https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc8/00000000002d83dc */

/* by kiDDieVelo */

/* @pushpend3r */

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
#define loop(start, end) for (ull i = start; i <= end; ++i)
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

struct commands
{
    ll w, s, n, e;
};

const ull m = 1e9;

commands count_(string &in, ull &start)
{
    commands c = {0, 0, 0, 0};

    for (; in[start] != '\0' && in[start] != ')'; start++)
    {
        if (in[start] >= '2' && in[start] <= '9')
        {
            short v = in[start] - '0';
            commands temp = count_(in, ++start);
            c.e = (c.e + (v * temp.e) % m) % m;
            c.s = (c.s + (v * temp.s) % m) % m;
            c.w = (c.w + (v * temp.w) % m) % m;
            c.n = (c.n + (v * temp.n) % m) % m;
        }
        else
        {
            if (in[start] == 'N')
                c.n++;
            else if (in[start] == 'S')
                c.s++;
            else if (in[start] == 'W')
                c.w++;
            else if (in[start] == 'E')
                c.e++;
        }
    }

    return c;
}

int main(void)
{
    fastIO;
    ull a, b, c, d;
    ll e, f, g, h, j, k, l, t;

    cin >> t;
    loop(0, t - 1)
    {
        string in;
        cin >> in;
        cout << "Case #" << i + 1 << ": ";
        a = 0;
        commands p = count_(in, a);
        ll r = 0, c = 0;
        r -= p.n % m;
        r += p.s % m;
        c -= p.w % m;
        c += p.e % m;
        r++;
        c++;
        if (r <= 0)
            r += m;
        if (c <= 0)
            c += m;
        cout << c << " " << r << nl;
    }
}