#include <stdio.h>
int main (void)
{
    int m = 300;
    float fx = 300.60006F;
    char cht = 'Z';
    printf("\tUse of & Operator\n");
    printf("The Address where m is stored is %p\n",&m);
    printf("The Address where fx is stored is %p\n",&fx);
    printf("The Address of where cht is stored is %p\n\n",&cht);

    printf("\tUse of & and * Operator\n");
    printf("Value Stored in M is %d\n",*&m);
    printf("Value Stored in fx is %f\n",*&fx);
    printf("Value Stored in cht is %c\n",*&cht);
    
    return 0;
}