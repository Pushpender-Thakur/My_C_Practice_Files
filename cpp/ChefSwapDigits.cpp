// https://www.codechef.com/LTIME82B/problems/SWPDGT

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int t;
char a[3], b[3];
int Max, lenA, lenB, tmp;

int main(void)
{
    cin >> t;

    while (t--)
    {
        cin >> a >> b;
        Max = atoi(a) + atoi(b);
        lenA = strlen(a);
        lenB = strlen(b);

        if (lenA == 1 && lenB == 2)
        {
            swap(a[0], b[0]);
            tmp = atoi(a) + atoi(b);

            if (tmp > Max)
                Max = tmp;
        }
        else if (lenB == 1 && lenA == 2)
        {
            swap(b[0], a[0]);
            tmp = atoi(a) + atoi(b);

            if (tmp > Max)
                Max = tmp;
        }
        else if (lenB == 2 && lenA == 2)
        {

            swap(a[0], b[1]);
            tmp = atoi(a) + atoi(b);

            if (tmp > Max)
                Max = tmp;

            swap(a[0], a[1]);
            swap(b[0], b[1]);

            tmp = atoi(a) + atoi(b);

            if (tmp > Max)
                Max = tmp;
        }

        cout << Max << endl;
    }
}