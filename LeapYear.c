#include <stdio.h>
int main(void)
{
    int Year;                               // Declear the variable
    printf("Enter Year: ");
    scanf("%d",&Year);                      // Ask user for Input
    
    // Year must be above from Zero
    if (Year > 0)
    {
        
    // Check whether year is divisible by 4
    if (Year % 4 == 0)
    {
        printf("%d is a Leap year",Year);
    }
    else
    {
        printf("%d is not a Leap year",Year);
    }
    }
    else
    {
        printf("Year Can't Be Zero or Less than Zero...");
    }
    
    return 0;
}