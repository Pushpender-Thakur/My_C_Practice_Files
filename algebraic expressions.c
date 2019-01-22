//algebraic expressions into equivalent c
#include <stdio.h>
int main (void)
{
	int x,y,z;
	x = 2;
	y = 3;
	z = ((x+3)*x*x*x)/((y-4)*(y+5));
	printf("%d",z);
	return 0;
}
