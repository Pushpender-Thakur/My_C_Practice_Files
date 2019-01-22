#include <stdio.h>
int main (void)
{
    char line[50];
    char line2[50];
    printf("Check the file!!\n");
    FILE *file2;
    file2 = fopen("file2.txt","r");
    fgets(line,50,file2);
    fgets(line2,50,file2);
    printf("This is First line:- %sThis is Second Line:- %s",line,line2);
    fclose(file2);
    return 0;
}