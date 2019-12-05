// https://www.codechef.com/COOK111B/problems/MDL

#include <iostream>
#define s std::

int main (void)
{
    int t,arr[19] = {},n;
    s cin >> t;

    while (t--)
    {
        s cin >> n;

        for (int i = 0; i < n; i++)
            s cin >> arr[i];

        int maxIndex = 0;
        int minIndex = 0;

        for (int i = 1; i < n; ++i)
        {
            if (arr[i] < arr[minIndex])
                minIndex = i;
            else if (arr[i] > arr[maxIndex])
                maxIndex = i;
        }

        if (maxIndex < minIndex)
            s cout << arr[maxIndex] << " " << arr[minIndex];
        else
            s cout << arr[minIndex] << " " << arr[maxIndex];

        s cout << s endl;
    }
}