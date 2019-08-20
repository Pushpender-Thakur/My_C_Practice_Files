#include <stdlib.h>
#include <stdio.h>

struct node
{
    struct node *leftNode;
    int item;
    struct node *rightNode;
};

struct node *front = NULL;
struct node *last = NULL;
int nodeCount = 0;

int addNode(int Item, int place)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp != NULL)
    {
        temp->item = Item;
        if (place <= 1)
        {
            if (front == NULL)
            {
                front = temp;
                last = temp;
                temp->leftNode = NULL;
                temp->rightNode = NULL;
            }
            else
            {
                temp->rightNode = front;
                front->leftNode = temp;
                temp->leftNode = NULL;
                front = temp;
            }

            nodeCount++;
        }
        else if (place > nodeCount)
        {
            if (last == NULL)
            {
                last = temp;
                temp->leftNode = NULL;
                temp->rightNode = NULL;
                front = temp;
            }
            else
            {
                last->rightNode = temp;
                temp->leftNode = last;
                temp->rightNode = NULL;
                last = temp;
            }

            nodeCount++;
        }
        else
        {
            place -= 2;
            int tempIndex = 0;
            struct node *p = front;
            while (tempIndex != place)
            {
                if (p != NULL)
                {
                    tempIndex++;
                    p = p->rightNode;
                }
            }

            (p->rightNode)->leftNode = temp;
            temp->rightNode = p->rightNode;
            temp->leftNode = p;
            p->rightNode = temp;

            nodeCount++;
        }
    }
    else
    {
        return -1;
    }
}

int main(void)
{
    int item, place;
    while (1)
    {
        scanf(" %d%d", &item, &place);
        addNode(item, place);
        struct node *temp;
        printf("Traversal from front:\n");
        temp = front;
        while (temp != NULL)
        {
            printf("%d", temp->item);
            temp = temp->rightNode;
            if (temp != NULL)
            {
                printf(" -> ");
            }
        }

        printf("\n\nTraversal from last:\n");
        temp = last;
        while (temp != NULL)
        {
            printf("%d", temp->item);
            temp = temp->leftNode;
            if (temp != NULL)
            {
                printf(" -> ");
            }
        }

        printf("\n\n");

        char choice;
        printf("Want to terminate program? press y for YES or n for NO ");
        scanf(" %c", &choice);
        if (choice == 'y' || choice == 'Y')
        {
            break;
        }
    }

    free(front);
    return 0;
}
