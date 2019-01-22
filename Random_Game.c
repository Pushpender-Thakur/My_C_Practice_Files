#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int cashInHand = 200;               // Decleared and initialized variables 
    int betAmt;                         // Decleared Variable
    int guessedHole;                    // Decleared Variable
    int actualHole;                     // Decleared Variable
    printf("Welcome To the Guessing Game\n\nIn this game a rat is hidden in one the ten holes such that Hole 1 ,2, 3, 4, 5");
    printf("\n\nRules:-\n1. To Enter this game to have to first bet.\n2. If you win you will get double the amt you have betted.\n3. If your guess is wrong the rat location will again change.");
    printf("\nTotal Amt you have: %d", cashInHand);


    // Create a function called randomization
    void randomization()
    {
        srand(time(NULL));
        actualHole = rand() % 5 + 1; 
        printf("Enter your guessed Hole No. : ");
        scanf("%d", &guessedHole);
    }

    // Create a function called bet
    void bet()
    {
        printf("\nEnter Amt of your Bet: ");
        scanf("%d", &betAmt);
        // Created a IF Statement for checking the amt of betAmt and cashInHand
        if (betAmt <= cashInHand)
        {
            cashInHand -= betAmt;
            //Calling the randomization function
            randomization();
            //When guessedHole and actualHole is equal
            if (guessedHole == actualHole)
            {
                printf("You Won!!\n");
                cashInHand += betAmt + betAmt;
                printf("Now Your Cash in hand is %d", cashInHand);
            }
            // When guessedHole and actualHole is not equal
            else 
            {
                printf("Sorry Better Luck Next Time\n");
                printf("Your Cash in Hand is %d", cashInHand);
                bet();
            }
        }
        // When No Amt is left
        else
        {
            printf("You don't have enough money\n");
        }
    }

    // Calling bet function
    bet();

    return 0;
}