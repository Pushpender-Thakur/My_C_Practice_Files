#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int r;
    srand(time(0));
    r = rand();
    printf("%d",r);
    return 0;
}