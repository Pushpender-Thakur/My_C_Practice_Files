#include <stdio.h>                                      // Add Standard Library File (aka Header File)
int main (void)
{
    float a,b,c,operation;                              // Declearation
    printf("Welcome to the calculator!!");              // Intro
    
    
    // Supported Operations
    printf("\nOperation No.\t Operation's Description");
    printf("\n\n1   =   \t Addition\n");
    printf("2   =   \t Subtraction\n");
    printf("3   =   \t Multiplication\n");
    printf("4   =   \t Division\n");
    printf("\n\nEnter Your Operation No. : ");
    scanf("%f",&operation);



    //////////////////////////////////////////////////
    
    // Check whether the input number is greater then equal to 1 and Less then equal to 4
    if (operation <= 4 && operation >= 1)
    {
        // For Addition
        if (operation == 1)
        {
            printf("Enter Your First Number : ");
            scanf("%f",&a);
            printf("Enter Your Second Number : ");
            scanf("%f",&b);
            c = a + b;
            printf("%0.3f + %0.3f is %0.3f",a,b,c);
        }
        // For Subtraction
        else if (operation == 2)
        {
            printf("Enter Your First Number : ");
            scanf("%f",&a);
            printf("Enter Your Second Number : ");
            scanf("%f",&b);
            c = a - b;
            printf("%0.3f - %0.3f is %0.3f",a,b,c); 
        }
        // For Multiplication
        else if (operation == 3)
        {
            printf("Enter Your First Number : ");
            scanf("%f",&a);
            printf("Enter Your Second Number : ");
            scanf("%f",&b);
            c = a * b;
            printf("%0.3f * %0.3f is %0.3f",a,b,c);
        }
        // For Division
        else 
        {
            printf("Enter Your First Number : ");
            scanf("%f",&a);
            printf("Enter Your Second Number : ");
            scanf("%f",&b);
            c = a / b;
            printf("%0.3f / %0.3f is %f",a,b,c);
        }
    }
    // When User Input Invalid Number for Operations
    else {
        printf("Invaild Choice....Re-Run the program");
    }
    ////////////////////////////////////////////////////
    return 0;
}