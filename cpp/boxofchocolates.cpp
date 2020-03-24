// https://www.codechef.com/COOK116B/problems/CHCBOX

#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>
#define sf(x) scanf(" %d", &x)
#define pf(x) printf("%d", x)
#define nl printf("\n")

using namespace std;

void availShifts(int i, int &shifts, int &half)
{
    if (i - half >= 0)
    {
        shifts += i / half;
        shifts += i % half;
    }
}

short t;
int n;
int w[100001];
int b[100000];
int shifts, INDEX, half;

int main(void)
{
    cin >> t;

    while (t--)
    {
        sf(n);

        for (int i = 0; i < n; ++i)
            sf(w[i]);

        int max = *max_element(w, w + n);

        INDEX = 0;
        int count = 0;
        half = n / 2;

        for (int i = 0; i < n; ++i)
        {
            if (w[i] == max)
            {
                w[i] = -1;
            }
            else
            {
                count++;
                continue;
            }
            b[INDEX] = count;
            INDEX++;
            count = 0;
        }

        b[INDEX] = count;
        INDEX++;

        shifts = 0;

        if (INDEX == 1)
        {
            availShifts(b[0], shifts, half);
        }
        else
        {
            availShifts(b[0] + b[INDEX - 1], shifts, half);

            for (int i = 1; i < INDEX - 1; ++i)
            {
                availShifts(b[i], shifts, half);
            }
        }

        pf(shifts);
        nl;
    }
}