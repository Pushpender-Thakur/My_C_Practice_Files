// https://www.hackerrank.com/contests/hack-the-interview-global/challenges/heads-or-tails/problem

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    char arr[n];
    string tpstr;

    for (int i = 0; i < n; ++i)
    {
        cin >> tpstr;
        arr[i] = tpstr[0];
    }

    int maxT = 0, maxH = 0, tempCount = 1;
    char prev = arr[0];

    (prev == 'H' ? maxH++ : maxT++);

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] != prev)
        {
            prev == 'H' ? maxH = max(tempCount, maxH) : maxT = max(tempCount, maxT);
            tempCount = 1;
            prev = arr[i];
        }
        else
            tempCount++;
    }

    prev == 'H' ? maxH = max(tempCount, maxH) : maxT = max(tempCount, maxT);

    cout << maxH << " " << maxT << endl;
}