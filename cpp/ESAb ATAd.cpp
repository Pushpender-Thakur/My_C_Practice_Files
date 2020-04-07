// https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd27/0000000000209a9e

#include <bits/stdc++.h>
using namespace std;
bool value;
bool query(int i)
{
    cout << i << endl;
    cin >> value;
    return value;
}

void quantumFluc(bool arr[], int &size, int op, int end)
{
    // Complement
    if (op == 1)
    {
        for (int i = 1; i <= end; ++i)
        {
            arr[i] = !arr[i];
            arr[size - i + 1] = !arr[size - i + 1];
        }
    }
    // Reverse
    else if (op == 2)
    {
        for (int i = 1; i <= end; ++i)
        {
            swap(arr[i], arr[size - i + 1]);
        }
    }
    // Complement + Reverse
    else
    {
        for (int i = 1; i <= end; ++i)
        {
            arr[i] = !arr[i];
            arr[size - i + 1] = !arr[size - i + 1];
            swap(arr[i], arr[size - i + 1]);
        }
    }
}

void p(bool arr[], int &q, int &b, vector<pair<bool, int>> &f, int values[], int &i)
{
    if (f[0].first && f[1].first)
    {
        q++;
        values[0] = query(f[0].second);
        q++;
        values[1] = query(f[1].second);

        if (values[0] == arr[f[0].second] && values[1] != arr[f[1].second])
        {
            quantumFluc(arr, b, 3, i);
        }
        else if (values[0] != arr[f[0].second] && values[1] != arr[f[1].second])
        {
            quantumFluc(arr, b, 1, i);
        }
        else if (values[0] != arr[f[0].second] && values[1] == arr[f[1].second])
        {
            quantumFluc(arr, b, 2, i);
        }
    }
    else
    {
        q++;
        value = query(1);
        q++;
        query(1);

        if (value != arr[1])
        {
            quantumFluc(arr, b, 1, i);
        }
    }
}

int main(void)
{
    int t, b;
    cin >> t >> b;
    while (t--)
    {
        int q = 1;
        bool arr[b + 1];
        q++;
        arr[1] = query(1);
        q++;
        arr[b] = query(b);
        vector<pair<bool, int>> f(2);
        if (arr[1] != arr[b])
        {
            f[0].first = 1;
            f[0].second = 1;
        }
        else
        {
            f[1].first = 1;
            f[1].second = 1;
        }

        int values[2];

        for (int i = 2; i <= b / 2; ++i)
        {
            q++;
            arr[i] = query(i);
            q++;
            arr[b - i + 1] = query(b - i + 1);

            if (arr[i] != arr[b - i + 1])
            {
                f[0].first = 1;
                f[0].second = i;
            }
            else
            {
                f[1].first = 1;
                f[1].second = i;
            }

            if (q % 10 == 1)
                p(arr, q, b, f, values, i);
        }

        for (int i = 1; i <= b; ++i)
            cout << arr[i];
        cout << endl;

        char result;
        cin >> result;

        if (result == 'N')
            return 0;
    }
}