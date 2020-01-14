// https://www.codechef.com/JAN20B/problems/ISBIAS

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long int

using namespace std;

int main(void)
{
    ll n, query, l, r, i;
    bool isEqual, upFlag, downFlag;

    cin >> n >> query;

    ll arr[n];
    ll count[n][2];
    upFlag = downFlag = false;

    for (i = 0; i < n; ++i)
        cin >> arr[i];

    count[0][0] = count[0][1] = 0;

    //cout << count[0][0] << " " << count[0][1] << endl;

    for (i = 1; i < n; ++i)
    {
        if (arr[i] > arr[i - 1])
        {
            if (upFlag == false)
            {
                count[i][0] = count[i - 1][0] + 1;
                count[i][1] = count[i - 1][1];
                upFlag = true;
                downFlag = false;
            }
            else
            {
                count[i][0] = count[i - 1][0];
                count[i][1] = count[i - 1][1];
            }
        }
        else
        {
            if (downFlag == false)
            {
                count[i][1] = count[i - 1][1] + 1;
                count[i][0] = count[i - 1][0];
                upFlag = false;
                downFlag = true;
            }
            else
            {
                count[i][0] = count[i - 1][0];
                count[i][1] = count[i - 1][1];
            }
        }

        //cout << count[i][0] << " " << count[i][1] << endl;
    }

    while (query--)
    {
        cin >> l >> r;

        isEqual = true;

        if (l + 1 == r)
        {
            isEqual = false;
        }
        else
        {
            ll max = count[r - 1][0] - count[l - 1][0];
            ll min = count[r - 1][1] - count[l - 1][1];
            if (l != 1 && arr[l - 1] < arr[l] && arr[l - 2] < arr[l - 1])
            {
                max++;
            }
            else if (l != 1 && arr[l - 1] > arr[l] && arr[l - 2] > arr[l - 1])
            {
                min++;
            }

            if (min != max)
                isEqual = false;
        }
        cout << (isEqual == false ? "NO" : "YES") << endl;
    }
}