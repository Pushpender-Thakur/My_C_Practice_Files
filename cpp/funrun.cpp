// https://www.codechef.com/CHPTRS01/problems/FUNRUN

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

short t;
int n, a[100001], b[100001];

// Taking Inputs
void takeInput(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
}

int main(void)
{
    cin >> t;

    while (t--)
    {
        cin >> n;

        takeInput(a, n);
        takeInput(b, n);

        if (*max_element(a, a + n) != *max_element(b, b + n))
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }
}