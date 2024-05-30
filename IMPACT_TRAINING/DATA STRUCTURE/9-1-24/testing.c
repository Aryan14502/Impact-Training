#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int val;
    struct node *next;
    struct node *previous;
} NODE;

int main()
{
    NODE *head = NULL, *temp = NULL, *newNode = NULL;
    int flag = 1, count = 0;

    while (flag)
    {
        newNode = (NODE *)malloc(sizeof(NODE));
        printf("enter the value of node : ");
        scanf("%d", &newNode->val);
        newNode->next = NULL;
        newNode->previous = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else 
        {
            temp->next = newNode;
            newNode->previous = temp;
            temp = temp->next;
        }
        printf("\nwant to continue the loop? (1/0)\n");
        scanf("%d", &flag);
    }

    temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->val);
        temp = temp->next;
    }
    printf("\n");

    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    while (temp != NULL)
    {
        printf("%d->", temp->val);
        temp = temp->previous;
    }

    return 0;
}
