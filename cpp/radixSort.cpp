#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string *countingSort(string *unSorted, int &n, int pos)
{
    int unSort[n];
    int count[10] = {};
    int len;

    for (int i = 0; i < n; ++i)
    {
        len = unSorted[i].length();
        if (pos > len - 1)
            unSort[i] = 0;
        else
        {
            unSort[i] = unSorted[i][len - 1 - pos] - 48;
        }
    }

    for (int i = 0; i < n; ++i)
        count[unSort[i]]++;

    // Cummulative Sum
    for (int i = 1; i < 10; ++i)
    {
        count[i] += count[i - 1];
    }

    string *sorted = new string[n];

    for (int i = n - 1; i >= 0; --i)
    {
        sorted[--count[unSort[i]]] = unSorted[i];
    }

    return sorted;
}

int main(void)
{
    int n, maxlen = -1, len;
    cin >> n;
    string *unSorted = new string[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> unSorted[i];
        len = unSorted[i].length();

        if (len > maxlen)
            maxlen = len;
    }

    string *temp;

    for (int i = 0; i < maxlen; ++i)
    {
        temp = unSorted;
        unSorted = countingSort(unSorted, n, i);
        delete[] temp;
    }

    for (int i = 0; i < n; ++i)
        cout << unSorted[i] << " ";

    cout << endl;

    delete[] unSorted;
}