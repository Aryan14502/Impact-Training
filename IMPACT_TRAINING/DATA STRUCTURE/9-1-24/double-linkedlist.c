#include <stdio.h>

typedef struct node
{
    int val;
    struct node *next;
    struct node *previous;
}NODE;

void dispFList(NODE *t);
void dispBList(NODE *t);

int main()
{
    NODE n1,n2,n3,n4;
    NODE *head=NULL, *temp=NULL;
    n1.val = 10;
    n1.next = NULL;
    n1.previous = NULL;

    n2.val = 20;
    n2.next = NULL;
    n2.previous = NULL;

    n3.val = 30;
    n3.next = NULL;
    n3.previous = NULL;

    n4.val = 40;
    n4.next = NULL;
    n4.previous = NULL;

    n1.next = &n2;
    n2.previous = &n1;
    n2.next = &n3;
    n3.previous = &n2;

    //addition of a new node n4 between n2 and n3
    n4.previous = &n2;
    n4.next = &n3;
    n3.previous = &n4;
    n2.next = &n4;

    head = &n1;
    temp = head;

    dispFList(temp);
    dispBList(temp);

    return 0;
}

void dispFList(NODE *t)
{
    printf("\n List is : \n");
    while (t)
    {
        printf("%d->",t->val);
        t = t->next;
    }
    printf("NULL\n\n");
}

void dispBList(NODE *t)  //backward list
{
    while (t->next != NULL)
    {
        t = t->next;
    }
    
    printf("\nList is : \n");
    while (t)
    {
        printf("%d->",t->val);
        t = t->previous;
    }
    printf("NULL\n\n");
}

