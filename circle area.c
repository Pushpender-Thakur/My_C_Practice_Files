#include <stdio.h>
int main (void)
{
	float area,circum,radius,pie,diameter;
	pie = 3.14F;
	printf("Enter the Diameter of Table: ");
	scanf("%f",&diameter);
	radius = diameter/2.0F;
	circum = 2.0f*radius*pie;
	area = pie*radius*radius;
	printf("\nCircumference = %.2f",circum);
	printf("\nArea = %.2f",area);
	return 0;
}
