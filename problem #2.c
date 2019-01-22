// program 2 for solving problems
#include <stdio.h>
int main (void)
{
	int salary;		//variales declears
	float gross;	//variales declears
	printf("Enter Salary : ");
	scanf("%i",&salary);
	float dearallow,rentallow;	//variales declears
	dearallow = (float)salary*40/100;
	rentallow = (float)salary*20/100;
	gross = salary - dearallow - rentallow;
	printf("Gross Salary (after allowance expenses are paid) = %0.3f",gross);
	return 0;
}
