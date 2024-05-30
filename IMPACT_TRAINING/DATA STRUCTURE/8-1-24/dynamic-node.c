#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};

typedef struct node NODE;

int main()
{
    NODE *newNode, *temp=NULL, *head=NULL;
    int ch = 1;
    while(ch)
    {
        newNode = (NODE *)malloc(sizeof(NODE));
        //assign values
        printf("\nEnter the value of New Node : ");
        scanf("%d",&newNode->val); 
        newNode -> next = NULL;

        if (head == NULL)
        {
            //list is empty
            head = newNode;
            temp = newNode;
        }
        else
        {
            //list is not empty
            temp -> next = newNode;
            temp = temp -> next;
        }

        printf("\nDo you want to add new node (0/1)? : ");
        scanf("%d",&ch);
    }
    temp = head;
    while (head!=NULL)
    {
        printf("%d->",temp->val);
        temp= temp->next;
    }
    return 0;
}