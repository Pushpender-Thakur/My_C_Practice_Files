// https://www.codechef.com/DEC19B/problems/WATSCORE

#include <iostream>
#define s std::

int main (void)
{
    int t,score = 0,n,arr[9] = {},Pi,Si;
    s cin >> t;

    while (t--)
    {
        score = 0;
        s cin >> n;

        for (int i = 0; i < n; i++)
        {
            s cin >> Pi >> Si;

            if (Pi <= 8 && arr[Pi] < Si)
            {
                arr[Pi] = Si; 
            }
        }

        for (int i = 1; i <= 8; i++)
        {
            score += arr[i];
            arr[i] = 0;
        }

        s cout << score << s endl;
    }
}