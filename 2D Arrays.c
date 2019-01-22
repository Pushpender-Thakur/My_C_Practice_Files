#include <stdio.h>
int main (void)
{
	int nums[3][2] = { {3,2}, {5,4}, {8,9} }; // Decleare Array and Initialized
	
	nums[1][1] = 0;
					
	printf("%d",nums[1][1]); 				// fetch values from the array
	return 0;
}
