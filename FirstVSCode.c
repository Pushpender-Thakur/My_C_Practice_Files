#include <stdio.h>    
int main (void)
{
    int age = 19;           // Variable Decleared
    int *pAge = &age;       // Pointer Decleared
    *pAge = 20;             // Storing New Value to the Pointer Location
    printf("%d\n",*pAge);   // Printing that value of the Pointer Location
    printf("%d",age);       // Value of Age Variable Changed
    return 0;
}