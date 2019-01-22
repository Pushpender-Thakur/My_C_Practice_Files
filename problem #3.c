// problem 3
#include <stdio.h>
int main (void)
{
	int distance;
	printf("Enter the distance between to cities: ");
	scanf("%d",&distance);
	printf("In Meters = %d.\n",distance*1000);	// kilometer = 1000 meter	
	printf("In Feet = %0.0f.\n",distance*1000*2.5);// 	1 meter = 2.5 foot
	printf("In Inch = %0.0f.\n",distance*1000*2.5*12);//	1 foot = 12 inch
	printf("In Centimetre = %0.0f.\n",distance*1000*2.5*12*2.5);//	1 inch = 2.5 cm
	return 0;
}
