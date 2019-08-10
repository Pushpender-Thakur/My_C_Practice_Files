#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *root;

// In Last and Start
int addNode(int INFO)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    if (temp != NULL)
    {
        temp->info = INFO;
        temp->next = NULL;

        if (root == NULL)
        {
            root = temp;
            return 0;
        }
        else
        {
            struct node *p = root;

            while (p->next != NULL)
            {
                p = p->next;
            }

            p->next = temp;

            return 0;
        }
    }
    else
    {
        printf("Something is Wrong!!\n");
        return -1;
    }
}

int main(void)
{
    while (1)
    {

        int value;
        printf("Enter Value: ");
        scanf("%d", &value);
        addNode(value);
        printf("\n");
        struct node *temp = root;
        while (temp != NULL)
        {
            printf("%d ", temp->info);
            temp = temp->next;
        }

        printf("\n");
    }

    free(root);
    return 0;
}
