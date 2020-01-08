// https://www.codechef.com/JAN20B/problems/CHFDORA

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int t, i, j, n, m, lenCurr, pairs, breakP, gap;

bool isPalindrome(vector<vector<int>> &arr, int &len, int &r, int &c)
{
    int limit = c + len / 2;
    int p = 0;
    for (int i = c - len / 2; i < c; ++i)
    {
        if (arr[r][i] != arr[r][limit - p++])
            return false;
    }

    limit = r + len / 2;

    p = 0;

    for (int i = r - len / 2; i < r; ++i)
    {
        if (arr[i][c] != arr[limit - p++][c])
            return false;
    }

    return true;
}

int main(void)
{

    // For fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));

        for (i = 0; i < n; ++i)
        {
            for (j = 0; j < m; ++j)
            {
                cin >> arr[i][j];
            }
        }

        pairs = n * m;
        breakP = min(n, m);

        if (breakP % 2 == 0)
            breakP--;

        for (i = 1; i < n - 1; ++i)
        {
            lenCurr = 3;
            gap = 1;

            while (lenCurr <= breakP)
            {

                for (j = gap; j < m - gap && i - gap >= 0 && i + gap <= n - 1; ++j)
                {
                    if (isPalindrome(arr, lenCurr, i, j))
                    {
                        pairs++;
                    }
                }

                lenCurr += 2;

                gap++;
            }
        }

        cout << pairs << endl;
    }
}