// https://www.codechef.com/DWWU2019/problems/DWW19C

#include <iostream>
using namespace std;

int main(void)
{
    int t, i, temp;
    string a, b;
    unsigned int len_a, len_b, cost;

    cin >> t;

    while (t--)
    {
        cin >> a >> b;
        int count[26] = {};

        len_a = a.size();
        len_b = b.size();
        cost = 0;

        for (i = 0; i < len_a; ++i)
        {
            count[a[i] - 'A']++;
        }

        for (i = 0; i < len_b; ++i)
        {
            count[b[i] - 'A']--;
        }

        for (i = 0; i < 26; ++i)
        {
            if (count[i] < 0)
            {
                cost += -count[i];
            }
        }

        cout << cost << endl;
    }
}