#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    int data;
    struct NODE *next;
    struct NODE *prev;
};

typedef struct NODE node;

node *first = NULL;
node *last = NULL;

int isEmpty()
{
    if (first == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Getting First Item
int getFront()
{
    return first->data;
}

// Remove from First
void dequeue()
{
    node *temp = first;

    if (first->next != NULL)
    {
        (first->next)->prev = NULL;
    }
    else
    {
        last = NULL;
    }

    first = first->next;

    free(temp);
}

// Insert at last
int enqueue(int value)
{
    node *temp = (node *)malloc(sizeof(node));

    if (temp != NULL)
    {
        temp->data = value;
        temp->next = NULL;
        if (first == NULL)
        {
            first = temp;
            temp->prev = NULL;
        }
        else
        {
            temp->prev = last;
            last->next = temp;
        }

        last = temp;

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
        printf("\n\n1.\tEnQueue\n2.\tDeQueue\n3.\tGet Front\n4.\tView Queue\n5.\tExit\n\n");
        int choice;
        printf("Enter Choice : ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            int item;
            printf("Enter Value: ");
            scanf("%d", &item);
            if (enqueue(item) == 1)
            {
                printf("\nSuccessfully EnQueued");
            }
        }
        else if (choice == 2)
        {
            if (first == NULL)
            {
                printf("\nNo Elements in Queue");
            }
            else
            {
                dequeue();

                printf("\nDeQueued Successfully");
            }
        }
        else if (choice == 3)
        {
            if (first != NULL)
            {
                printf("\n%d", getFront());
            }
            else
            {
                printf("No Elements in Queue");
            }
        }
        else if (choice == 4)
        {
            if (first == NULL)
            {
                printf("\nNo Elements in Queue");
            }
            else
            {
                node *temp = first;
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
        }
        else
        {
            break;
        }

        printf("\n\n");
    }
    return 0;
}