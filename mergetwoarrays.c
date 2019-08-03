#include <stdio.h>
int main(void)
{
    int sizeOfArr1, sizeOfArr2;
    int i;

    // Array 1
    printf("Enter First Array Size: ");
    scanf("%d", &sizeOfArr1);
    int arr1[sizeOfArr1];
    for (i = 0; i < sizeOfArr1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Array 2
    printf("\nEnter Second Array Size: ");
    scanf("%d", &sizeOfArr2);
    int arr2[sizeOfArr2];
    for (i = 0; i < sizeOfArr2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int arr3[sizeOfArr1 + sizeOfArr2];
    unsigned int index = 0;
    int j;

    unsigned int A_Arr1_Flag = arr1[0] > arr1[sizeOfArr1 - 1] ? 0 : 1;
    unsigned int A_Arr2_Flag = arr2[0] > arr2[sizeOfArr2 - 1] ? 0 : 1;


    // Ascending - Ascending
    if (A_Arr1_Flag == 1 && A_Arr2_Flag == 1)
    {
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
    }

    // Decending  - Decending
    else if (A_Arr1_Flag == 0 && A_Arr2_Flag == 0)
    {
        for (i = sizeOfArr1 - 1, j = sizeOfArr2 - 1; i >= 0 && j >= 0; i--, j--)
        {
            if (arr1[i] > arr2[j])
            {
                arr3[index] = arr2[j];
                index++;
                i++;
            }
            else if (arr1[i] < arr2[j])
            {
                arr3[index] = arr1[i];
                index++;
                j++;
            }
            else
            {
                arr3[index] = arr1[i];
                index++;
            }
            
        }

        if (j > 0 && i == -1)
        {
            for (j; j >= 0; j--)
            {
                if (arr3[index - 1] != arr2[j])
                {
                    arr3[index] = arr2[j];
                    index++;
                }
            }
        }
        else if (i > 0 && j == -1)
        {
            for (i; i >= 0; i--)
            {
                if (arr3[index - 1] != arr1[i])
                {
                    arr3[index] = arr1[i];
                    index++;
                }
            }
        }
        
    }

    // Ascending - Decending
    else if (A_Arr1_Flag == 1 && A_Arr2_Flag == 0)
    {
        for (i = 0, j = sizeOfArr2 - 1; i < sizeOfArr1 && j >= 0; i++,j--)
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
                j++;
            }
            else
            {
                arr3[index] = arr1[i];
                index++;
            }
            
        }

        if (i == sizeOfArr1)
        {
            for (j; j >= 0; j--)
            {
                if (arr3[index - 1] != arr2[j])
                {
                    arr3[index] = arr2[j];
                    index++;
                }
            }
        }
        else if (j == -1)
        {
            for (i; i < sizeOfArr1; i++)
            {
                if (arr3[index - 1] != arr1[i])
                {
                    arr3[index] = arr1[i];
                    index++;
                }
            }
        }
    }

    // Decending - Ascending
    else
    {
        for (i = sizeOfArr1 - 1,j = 0; i >= 0, j < sizeOfArr2; i--,j++)
        {
            if (arr1[i] > arr2[j])
            {
                arr3[index] = arr2[j];
                index++;
                i++;
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

        if (i == -1)
        {
            for (j; j < sizeOfArr2; j++)
            {
                if (arr3[index - 1] != arr2[j])
                {
                    arr3[index] = arr2[j];
                    index++;
                }
            }
        }
        else if (j == sizeOfArr2)
        {
            for (i; i >= 0; i--)
            {
                if (arr3[index - 1] != arr1[i])
                {
                    arr3[index] = arr1[i];
                    index++;
                }
            }
        }
        
    }
    

    printf("\nArray 3: - \n");
    for (i = 0; i < index; i++)
    {
        printf("%d ", arr3[i]);
    }

    printf("\n");

    return 0;
}