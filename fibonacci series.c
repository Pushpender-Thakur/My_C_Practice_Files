#include <stdio.h>
int main(void)
{
    int MaxNumCount, a, b, c;               // Variable Declarations
    printf("Enter Maximum Number Count: "); // User Entering MaxNumCount
    scanf("%d", &MaxNumCount);
    a = 0;
    b = 0;
    c = 1;
    printf("%d\n", c);

    /* --------------- */
    int i;                                  // Loop Variable

    // Loop Starts
    for (i = 1; i <= MaxNumCount; i++)
    {
        a = b;
        b = c;
        c = a + b;
        printf("%d\n", c);
    }

    /* -------------- */

    return 0;
}