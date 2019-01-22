// problem #3
#include <stdio.h>
int main (void)
{
	int eng,hindi,maths,science,physical;// variable declearation	
	printf("Enter Marks: \nEnglish: ");
	scanf("%d",&eng);// store value in eng
	printf("Hindi: ");
	scanf("%d",&hindi);// store value in hindi
	printf("Maths: ");
	scanf("%d",&maths);// store value in maths
	printf("Science: ");
	scanf("%d",&science);// store value in science
	printf("Physical: ");
	scanf("%d",&physical);// store value in physical
	int total = eng+hindi+maths+science+physical;// declear and initial the value
	printf("\nTotal Marks: %d",total);
	printf("\nPercentage: %0.2f",(float)total/500*100);
	return 0;	
}

