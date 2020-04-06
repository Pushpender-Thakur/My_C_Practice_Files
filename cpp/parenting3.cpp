// https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd27/000000000020bdf9

#include <bits/stdc++.h>
using namespace std;

int t, n;
bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[0] < v2[0];
}

bool sortcol2(const vector<int> &v1, const vector<int> &v2)
{
    return v1[3] < v2[3];
}
int main(void)
{
    cin >> t;

    for (int i = 1; i <= t; ++i)
    {
        cin >> n;
        vector<vector<int>> arr(n, vector<int>(4));
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i][0] >> arr[i][1];
            arr[i][2] = 0;
            arr[i][3] = i;
        }

        sort(arr.begin(), arr.end(), sortcol);

        bool flag = true;
        int c, j;
        c = 0;
        j = -1;

        arr[0][2] = 'C';

        for (int i = 1; i < n; ++i)
        {
            if (c != -1 && j != -1)
            {
                if (arr[i][0] >= arr[c][1])
                {
                    arr[i][2] = 'C';
                    c = i;
                }
                else if (arr[i][0] >= arr[j][1])
                {
                    arr[i][2] = 'J';
                    j = i;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else if (c != -1)
            {
                if (arr[i][0] < arr[c][1])
                {
                    arr[i][2] = 'J';
                    j = i;
                }
                else
                {
                    arr[i][2] = 'C';
                    c = i;
                }
            }
            else if (j != -1)
            {
                if (arr[i][0] < arr[j][1])
                {
                    arr[i][2] = 'C';
                    c = i;
                }
                else
                {
                    arr[i][2] = 'J';
                    j = i;
                }
            }
        }

        cout << "Case #" << i << ": ";

        if (!flag)
        {
            cout << "IMPOSSIBLE\n";
        }
        else
        {
            char ans;
            sort(arr.begin(), arr.end(), sortcol2);
            for (int i = 0; i < n; ++i)
            {
                ans = arr[i][2];
                printf("%c", ans);
            }

            cout << endl;
        }
    }
}