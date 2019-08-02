#include <stdio.h>
int main(void)
{
    unsigned int sizeOfArr1, sizeOfArr2, i;

    // Array 1
    printf("Enter First Array Size: ");
    scanf("%u", &sizeOfArr1);
    int arr1[sizeOfArr1];
    for (i = 0; i < sizeOfArr1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Array 2
    printf("\nEnter Second Array Size: ");
    scanf("%u", &sizeOfArr2);
    int arr2[sizeOfArr2];
    for (i = 0; i < sizeOfArr2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int arr3[sizeOfArr1 + sizeOfArr2];
    unsigned int index = 0;
    unsigned int j;

    for (i = 0, j = 0; i < sizeOfArr1 && j < sizeOfArr2; i++, j++)
    {
        if (arr1[i] > arr2[j])
        {
            arr3[index] = arr2[j];
            index++;
            i--;
        }
        else if (arr1[i] < arr2[j])
        {
            arr3[index] = arr1[i];
            index++;
            j--;
        }
        else
        {
            arr3[index] = arr1[i];
            index++;
        }
    }

    if (j == sizeOfArr2 && i < sizeOfArr1)
    {
        for (i; i < sizeOfArr1; i++)
        {
            if (arr1[i] != arr3[index - 1])
            {
                arr3[index] = arr1[i];
                index++;
            }
        }
    }
    else if (i == sizeOfArr1 && j < sizeOfArr2)
    {
        for (j; j < sizeOfArr2; j++)
        {
            if (arr2[j] != arr3[index - 1])
            {
                arr3[index] = arr2[j];
                index++;
            }
        }
    }

    for (i = 0; i < index; i++)
    {
        printf("%d ", arr3[i]);
    }

    printf("\n");

    return 0;
}