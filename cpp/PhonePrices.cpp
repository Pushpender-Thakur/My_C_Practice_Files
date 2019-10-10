// https://www.codechef.com/OCT19B/problems/S10E

#include <iostream>
#define s std::

bool goodPrice(int *arr, int point)
{
    bool isTrue = true;

    for (int i = point - 1; i >= 0 && point - 5 <= i; i--)
    {
        if (arr[point] >= arr[i])
        {
            isTrue = false;
            break;
        }
    }

    return isTrue;
}

#define s std::

int main(void)
{
    int t;
    s cin >> t;

    while (t--)
    {
        int size;
        s cin >> size;

        int arr[size];

        int count = 0;

        for (int i = 0; i < size; i++)
        {
            s cin >> arr[i];

            if (goodPrice(arr, i) == true)
            {
                count++;
            }
        }

        s cout << count << s endl;
    }
}
