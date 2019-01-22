/* While Loop Program Created by Pushpender Thakur */

#include <stdio.h>
int main(void)
{
	int randomNumber = 5;									// randomNumber Decleared and Initialized
	int Guess;												// Guess Variable Decleared Only
	int GuessCount;											// GuessCount Varible Decleared Only
	
	printf("\tGuessing Game\n\n");    						// Title
	printf("Rule :- Only You Have Three Guesses\n\n");		// RULE
	
	while (Guess != randomNumber && GuessCount != 3)		// While Loop Start
	{
		printf("Enter a Number :- ");
		scanf("%d",&Guess);
		GuessCount++;
	}
	if (Guess == randomNumber)								// Checking Whether the User Got the random Number Or Not !!!!
	{
	printf("You Win!!");									// He/She Got that random Number
	} else {
		printf("You Out of Guesses");						// He/She didn't Get the Random Number
			}
	return 0;
}
