// https://www.hackerrank.com/challenges/almost-sorted/problem

#include <stdio.h>

int size, i;

// Checking is Array Sorted!!
int isSorted(int arr[], int start)
{
    for (i = start; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return i;
        }
    }

    return -1;
}

// Can Swap do the work?
int canSwap(int arr[], int point)
{
    int end = point + 1;
    for (i = end; i < size; i++)
    {
        if (arr[point] < arr[i])
        {
            end = i - 1;
            break;
        }
    }
    int temp = arr[point];
    arr[point] = arr[end];
    arr[end] = temp;

    if (isSorted(arr, 0) == -1)
    {
        return end;
    }
    else
    {
        return -1;
    }
}

int canReverse(int arr[], int point)
{
    int end = point + 1;
    for (i = end; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            end = i + 1;
        }
        else
        {
            break;
        }
    }

    int limit = (end - point) / 2;

    for (i = 0; i <= limit; i++)
    {
        int temp = arr[point + i];
        arr[point + i] = arr[end - i];
        arr[end - i] = temp;
    }

    if (point - 1 >= 0)
    {
        if (isSorted(arr, point - 1) == -1)
        {
            return end;
        }
    }
    else
    {
        if (isSorted(arr, point) == -1)
        {
            return end;
        }
    }

    return -1;
}

int main(void)
{
    scanf(" %d", &size);
    int Arr[size], temp1[size], temp2[size];
    for (i = 0; i < size; i++)
    {
        scanf(" %d", &Arr[i]);
        temp1[i] = Arr[i];
        temp2[i] = Arr[i];
    }

    int point = isSorted(Arr, 0);

    if (point != -1)
    {
        int end = canSwap(temp1, point);
        if (end != -1)
        {
            printf("yes\nswap %d %d", point + 1, end + 1);
        }
        else
        {
            end = canReverse(temp2, point);
            if (end != -1)
            {
                printf("yes\nreverse %d %d", point + 1, end + 1);
            }
            else
            {
                printf("no");
            }
        }
    }
    else
    {
        printf("yes");
    }

    printf("\n");

    return 0;
}
