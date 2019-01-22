#include <stdio.h>
int main(void)
{
    int p;
    int count = 10;
    float sum = 0;
    float number;

    for (int i = 0;i < 10;i++)
    {
        printf("Enter Number: ");
        scanf("%f",&number);
        sum += number;

    }

    float average = sum/count;
    printf("Average is %0.2f",average);

    return 0;
}