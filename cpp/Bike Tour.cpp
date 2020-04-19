/* https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc8/00000000002d82e6 */

#include <iostream>
using namespace std;

int t, n, c;
int h[101];

int main(void)
{
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        printf("Case #%i: ", i + 1);
        cin >> n;
        for (int j = 0; j < n; ++j)
            cin >> h[j];
        c = 0;
        for (int j = 1; j < n - 1; ++j)
        {
            if (h[j] > h[j - 1] && h[j] > h[j + 1])
                c++;
        }
        printf("%d\n", c);
    }
}