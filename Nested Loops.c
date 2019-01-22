#include <stdio.h>
int main (void)
{
	int nums[3][2] = {
	{3,2
	},{4,5},{9,8}
	
	};  														// Array Decleared and Initialized
	
	int i,j;													// decleared Variables
	for (i = 0;i < 3;i++){										/* For Loop for Main Array Index */
		for (j = 0;j < 2;j++){									/* For Loop for Child Array Index*/
			printf("%d,",nums[i][j]);
			
		}
		
		printf("\n");
	}
}
