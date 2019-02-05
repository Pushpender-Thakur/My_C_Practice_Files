#include <stdio.h>                              // Standard Library File aka Header File
int main(void)
{
    /* ---------------------- */

    // Declarations
    int Maxlimit;
    int toDivided;
    int i;                                      // Parent Loop Variable
    int t;                                      // Child Loop Variable

    /* ---------------------- */

    // Asks User for Input the Number til that you want to Print all Prime Numbers
    printf("Enter Max Limit: ");
    scanf("%d", &Maxlimit);

    /* ---------------------- */

    // Checking that user entered Number must be above from 0
    if (Maxlimit > 0)
    {
        // Parent Loop Starts
        for (i = 1; i <= Maxlimit; i++)
        {
            if (i == 1 || i == 2 || i == 3)
            {
                printf("%d\n",i);
            }
            else if (i % 2 != 0)
            {
                int p = 0;                  // Most Important Variable Declaration

                // Child Loop Starts
                for (t = 2; t <= (i / 2); t++)
                {
                    if (i % t == 0)
                    {
                        p = 1;
                        break;
                    }
                }
                if (p == 0)
                {
                    printf("%d\n",i);
                }

                
            }
        }
    }

    // When user entered zero or less than zero
    else
    {
        printf("There is no Prime Number below from 1");
    }

    return 0;
}