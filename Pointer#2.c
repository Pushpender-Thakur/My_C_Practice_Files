#include <stdio.h>
int main (void)
{
    int m = 29;
    printf("The Address of m is %p\n",&m);
    int *pM = &m;
    int *ab;
    ab = pM;
    printf("The Address of ab is %p\n",ab);
    printf("The Content of ab is %d\n",*ab);
    m = 34;
    printf("The Address of ab is %p\n",ab);
    printf("The Content of ab is %d\n",*ab);
    *ab = 7;
    printf("The Address of m is %p\n",&m);
    printf("The Content of m is %d\n",m);
    return 0;
}