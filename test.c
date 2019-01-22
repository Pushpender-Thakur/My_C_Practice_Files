#include <stdio.h>
int main(void)
{
    printf("Check Value in File!!");
    char name[50];
    FILE *fprt = fopen("fprt.txt","r+");
    //fgets(name,50,fprt);
    //fprintf(fprt,"Piyush Thakur, Student");
    printf("%s",name);
    fclose(fprt);
    return 0;
}
