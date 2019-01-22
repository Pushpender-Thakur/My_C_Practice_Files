#include<stdio.h>

int max(int num1,int num2,int num3)
{
	int result;
	if (num1 >= num2 && num1 >= num3){
		result = num1;
		printf("%d",result);
	} else if (num2 >= num1 && num2 >= num3){
		result = num2;
		printf("%d",result);
	} else if (num3 >= num1 && num3 >= num2){
		result = num3;
		printf("%d",result);
	} else {printf("%d",num1);
			return 0;
	}
}
int main (void)
{
	int num1,num2,num3;
	printf("Program that finds which number is greatest than others\n\n");
	printf("\tEnter First Number : ");
	scanf("%d",&num1);
	printf("\tEnter Second Number : ");
	scanf("%d",&num2);
	printf("\tEnter Third Number : ");
	scanf("%d",&num3);
	printf("Answer : ");
	puts(max(num1,num2,num3));
	
}
