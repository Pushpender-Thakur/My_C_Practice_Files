// https://www.hackerrank.com/contests/hack-the-interview-global/challenges

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string str;
    int base, sum = 0;
    cin >> str >> base;

    for (auto &i : str)
        sum += (i - 'a' + base) % 26;

    cout << sum << endl;
}