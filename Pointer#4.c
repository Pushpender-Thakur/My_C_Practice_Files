#include <stdio.h>
int main (void)
{
    int A;                          // Declear A              
    int B;                          // Declear B
    printf("Enter First Number: "); 
    scanf("%d",&A);                 // Ask Input from User and store that value in Variable A
    printf("Enter Second Number: ");
    scanf("%d",&B);                 // Ask Input From User and Store that value in Variable B
    int *pA = &A;                   // Created a Pointer and Point it to Variable A Address
    int *pB = &B;                   // Created a Pointer and Point it to Variable B Address
    int Sum;                        // Sum Variable Decleared 
    Sum = *pA + *pB;                // Initialized that with the help of Pointers
    int *pSum = &Sum;               // Create a Pointer and Point it to Variable Sum Address
    printf("Answer is %d",*pSum);   // Print Value to the Console/Screen with the help of pSum Pointer
    return 0; 
}