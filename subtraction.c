#include <stdio.h>
int main (void)
{
	int total_cookies = 100;
	int total_eaten = 0;
	int cookie_calorie = 125;
	
	int eaten = 8;
	total_eaten = total_eaten + eaten;
	total_cookies = total_cookies - total_eaten;
	
	printf("I have eaten %d cookies, Now total cookies are %d.\n\n",total_eaten,total_cookies);
	
	eaten = 3;
	total_eaten = total_eaten + eaten;
	total_cookies = total_cookies - total_eaten;
	printf("Now I have eaten more %d cookies, Now Total cookies are %d.\n",eaten,total_cookies);
	
	printf("Now you want know how many calories have i gained from eating cookies\n");
	printf("\nThe One cookie calorie is %d\nAnd how many cookies have i eaten are %d\n\n",cookie_calorie,total_eaten);
	printf("Total Calories that i have gained are %d.",cookie_calorie*total_eaten);
	return 0;
}
