# include <stdio.h>
int main (void)
{
    char string[] = "Hello There!!";    // Decleare and initialized string
    char string2[] = "This is second string";   //Declare and initialized string
    int count = 0;                      // decleared variable


    // Use while loop for checking the characters in string variable except NULL Character
    while (string[count] != '\0')       
    {
        count++;
    }
    printf("String length is %d\n",count);

    count = 0;                          // Reset value to zero


    // use while loop for checking the character in string2 variable except NULL Character
    while (string2[count] != '\0')
    {
        count++;
    }
    printf("String2 length is %d",count);
    return 0;
}