#include <stdio.h>
int main (void)
{
	int i = 2,j=3,k,l;
	float a,b;
	k=i/j*j;//answer is 0
	l=j/i*i;//answer is 2
	a=i/j*j;//answer is 0.0000
	b=j/i*i;//answer is 2.0000
	printf("%d %d %f %f",k,l,a,b);
	return 0;
}
