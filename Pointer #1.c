#include <stdio.h>
int main (void)
{
    int m = 10;
    int n,o;
    int *z;
    z = &m;
    printf("The Address of m is %p\n",z);
    printf("The Address of n is %p\n",&n);
    printf("The Address of o is %p",&o);
    return 0;
}