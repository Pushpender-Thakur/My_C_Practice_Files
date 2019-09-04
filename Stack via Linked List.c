#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *top = NULL;

int push(int value)
{
    NODE *temp = (NODE *)malloc(sizeof(NODE));

    if (temp != NULL)
    {
        temp->data = value;

        if (top == NULL)
        {
            top = temp;
            temp->next = NULL;
        }
        else
        {
            temp->next = top;
            top = temp;
        }

        return 1;
    }
    else
    {
        return 0;
    }
}

int pop()
{
    if (top != NULL)
    {
        NODE *toBeFree = top;
        int data = top->data;
        top = top->next;
        free(toBeFree);
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    while (1)
    {
        printf("\n\n1.\tPOP\n2.\tPUSH\n3.\tVIEW\n4.\tEXIT\n\nEnter Choice: ");
        int choice;
        scanf(" %d", &choice);
        if (choice == 1)
        {
            if (pop() == 1)
            {
                printf("Pop Operation Complete");
            }
            else
            {
                printf("Failed UnderFlow Happened");
            }
        }
        else if (choice == 2)
        {
            int data;
            printf("Enter Data: ");
            scanf("%d", &data);
            if (push(data) == 1)
            {
                printf("Push Operation Complete");
            }
            else
            {
                printf("Failed OverFlow Happened");
            }
        }
        else if (choice == 3)
        {
            NODE *temp = top;
            while (temp != NULL)
            {
                printf("%d", temp->data);
                temp = temp->next;
                if (temp != NULL)
                {
                    printf(" -> ");
                }
            }
        }
        else
        {
            break;
        }

        printf("\n");
    }
    return 0;
}