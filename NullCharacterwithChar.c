#include <stdio.h>
int main (void)
{
    char test[5];
    fgets(test,5,stdin);
    printf("%s",test);
    return 0;
}