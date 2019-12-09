// https://www.codechef.com/DEC19B/problems/PLMU

#include <iostream>
#define s std::

int main (void)
{
    int t,n,temp,twoCount,zeroCount,pairs;

    s cin >> t;

    while (t--)
    {
        s cin >> n;

        twoCount = 0;
        zeroCount = 0;

        for (int i = 0; i < n; i++)
        {
            s cin >> temp;

            if (temp == 2)
                twoCount++;
            else if (temp == 0)
                zeroCount++;
        }

        pairs = ((zeroCount - 1) * zeroCount) / 2 + ((twoCount - 1) * twoCount) / 2;

        s cout << pairs << s endl;
    }
}