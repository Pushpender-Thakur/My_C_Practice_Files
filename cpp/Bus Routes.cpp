/* https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc8/00000000002d83bf */

#include <iostream>
using namespace std;

typedef unsigned long long int ull;
int t, n, c;
ull d;
ull a[1001];
int main(void)
{
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        printf("Case #%d: ", i + 1);
        cin >> n >> d;

        for (int j = 0; j < n; ++j)
            cin >> a[j];

        ull r;
        for (int j = n - 1; j >= 0; j--)
        {
            r = d % a[j];

            if (r != 0)
                d -= r;
        }

        cout << d << "\n";
    }
}