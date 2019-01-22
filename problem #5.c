//problem #5
#include <stdio.h>
int main (void)
{
	float fahren;//	declear the float variable
	printf("Enter Fahrenheit Degrees: ");
	scanf("%f",&fahren);// store the value in fahren
	float centigrade = (fahren-32)*5/9;// conversion by the rule
	printf("Centigrade: %f",centigrade);
	return 0 ;
}
