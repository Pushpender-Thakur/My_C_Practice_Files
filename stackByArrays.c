#include <stdio.h>
#include <stdlib.h>
int arr[10];
int INDEX = -1;
int push(int item)
{
    if (INDEX == 9)
    {
        return -1;
    }
    else
    {
        INDEX++;
        arr[INDEX] = item;
        return 0;
    }
}

int pop()
{
    if (INDEX == -1)
    {
        return -1;
    }
    else
    {
        INDEX--;
        return 0;
    }
}
int main(void)
{
    while (1)
    {
        int choice, item;
        printf("Choice No:\n");
        printf("1. Push\n2. Pop\n3. View Stack\n4. Exit\n");
        printf("Enter Choice No: ");
        scanf(" %d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter Value: ");
            scanf(" %d", &item);
            if (push(item) == 0)
            {
                printf("Successfully Pushed to Stack!!");
            }
            else
            {
                printf("Stack is Full!!");
            }
            break;
        case 2:
            if (pop() == 0)
            {
                printf("Successfully Popped from Stack!!");
            }
            else
            {
                printf("Stack is Empty!!");
            }
            break;
        case 3:
            if (INDEX == -1)
            {
                printf("Stack is Empty!!");
            }
            else
            {
                int i;
                for (i = 0; i <= INDEX; i++)
                {
                    printf("%d ", arr[i]);
                }
            }
            break;

        default:
            exit(0);
            break;
        }

        printf("\n");
    }
    return 0;
}