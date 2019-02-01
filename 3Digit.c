#include <stdio.h>                  // Library File aka Header File
int main (void)
{
    int d = 0;                      // Declared and initialized
    printf("Enter Number: ");       // Ask User for input
    scanf("%d",&d);
    int o = d % 10;                 // For Getting Last Digit
    int i = d / 10;                 
    int t = i % 10;                 // For getting Second Last Digit
    int h = i / 10;                 // Starting Digit
    printf("%d\t%d\t%d",h,t,o);     // Print Value
    
    // For Check whether the number is palindrome
    int palin = (o * 100) + (t * 10) + h;
    
    // Condition Starts
    if (palin == d)
    {
        printf("\nThis Number is Palindrome");
    }
    else
    {
        printf("\nNo, It's not the Palindrome number!!");
    }
    return 0;
}