#include <stdio.h>

struct node
{
    int val;
    struct node *ptr;
};

int main()
{
    //creating a node
    struct node n0,n1,n2,n3,n4;
    struct node *head=NULL;
    struct node *temp=NULL;

    temp = head;
    
    //assigning values
    n0.val = 50;
    n0.ptr = NULL;
    n1.val = 10;
    n1.ptr = NULL;
    n2.val = 20;
    n2.ptr = NULL;
    n3.val = 30;
    n3.ptr = NULL;
    //making a relationship or link it
    n1.ptr = &n2;
    n2.ptr = &n3;
    //transversing
    head = &n1;
    
    while (head!=NULL)
    {
        printf("%d->",head->val);
        head = head->ptr;
    }

    n4.val = 40;
    n4.ptr = NULL;
    head = &n1;

    while (head!=NULL)
    {
        if (head->val == 20)
            break;
        head = head->ptr;
    }

    temp = head->ptr;
    printf("\ntemp = %d\n",temp->val);

    n2.ptr = &n4;
    n4.ptr = temp;

    head = &n1;

    while(head!=NULL)
    {
        printf("%d->",head->val);
        head = head->ptr;
    } 
    

    temp = head->ptr;
    head = &n0;
    n0.ptr = &n1;
    while(head!=NULL)
    {
        printf("%d->",head->val);
        head = head->ptr;
    }
}