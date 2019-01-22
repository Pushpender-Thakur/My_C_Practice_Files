#include <stdio.h>
int main(void)
{
    printf("Check Value in File!!");
    char name[50];
    char name2[50];
    char name3[50];
    char name4[50];
    char name5[50];
    FILE *fprt = fopen("fprt.txt","a+");
    fgets(name,50,fprt);
    fgets(name2,50,fprt);
    printf("%s",name);
    printf("%s",name2);
    fgets(name3,50,fprt);
    printf("%s",name3);
    fgets(name4,50,fprt);
    printf("%s",name4);
    fprintf(fprt,"\nTarun");
    fgets(name5,50,fprt);
    printf("%s",name5);
    fclose(fprt);
    fflush(fprt);
    return 0;
}