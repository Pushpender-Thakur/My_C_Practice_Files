#include <stdio.h>
int Index = -1;
int size;
int push(int value, int *arr)
{
    if (size - 1 == Index)
    {
        return 0;
    }
    else
    {
        Index++;
        arr[Index] = value;
        return 1;
    }
}

int pop(int *arr)
{
    if (Index == -1)
    {
        return -1;
    }
    else
    {
        Index--;
        return arr[Index + 1];
    }
}

int main(void)
{
    scanf("%d", &size);
    int arr[size];
    int Main[size];
    int i;
    for (i = 0; i < size; i++)
    {
        scanf(" %d", &Main[i]);
    }

    for (i = size - 1; i >= 0; i--)
    {
        int j;
        for (j = i + 1; j < size - 1; j++)
        {
            if (Main[i] < Main[j])
            {
                break;
            }
        }

        if (j == size)
        {
            push(-1, arr);
        }
        else
        {
            push(Main[j], arr);
        }
    }

    for (i = Index; i >= 0; i--)
    {
        printf("%d ", pop(arr));
    }

    printf("\n");

    return 0;
}