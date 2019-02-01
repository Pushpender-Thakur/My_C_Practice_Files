#include <stdio.h>
int main (void)
{
    int Z = 0;                                  // Declared and Initialized
    printf("Enter Number: ");                   // Asks User for Input
    scanf("%d",&Z);

    // Number Should be above Zero
    if (Z > 0)
    {
        // Loop Starts
        while (Z >= 10)
        {
        int O = Z % 10;                         // for last digit
        printf("%d\t",O);                       // Print that
        Z = Z / 10;
        if (Z <= 10)
            {
            printf("%d\t",Z);
            }
        }
        
   }
   // if user entered number that either zero or less than zero
   else
   {
       printf("Number can't be Zero or Less than Zero!!");
   }

   return 0;  
}