#include <stdio.h>                  // Standard Library file aka Header File
int main (void)
{
    int Max = 0;                    // Maximum Limit Variable
    printf("Enter Max Limit: ");    // Ask Input from User
    scanf("%d",&Max);
    int i = 0;                      // Parent Loop Variable
    int t = 0;                      // Child Loop Variable
    
    // Parent Loop
    for (i = 1;i <= Max;i++)
    {
        // Child Loop
        for (t = 1; t <= i;t++)
        {
            printf("%d\t",i);       // Print the Value
        }

        printf("\n");               // New Line
    }
    return 0;

    // This Program Only Works With Natural Numbers
    // 'cuz Our Loops Variable's Starting from 1
    // if you entered Zero or Less, this program won't work
}