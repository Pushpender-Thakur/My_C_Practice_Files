#include <stdio.h>
int main (void)
{
    int A;
    int B;
    printf("Enter First Number: ");
    scanf("%d",&A);
    printf("Enter Second Number: ");
    scanf("%d",&B);

    if (A > B){
        printf("%d is highest Value in between %d and %d",A,A,B);
    } else {
        printf("%d is highest Value in between %d and %d",B,A,B);
    }

    return 0;

}