#include <stdio.h>
#include <stdlib.h>

struct node
{
  int val;
  struct node *next;
};

typedef struct node NODE;

void *createNNode();
NODE *appendList(NODE *,NODE *);
int dispMenu();
void dispList(NODE *);
NODE *beginning(NODE *, NODE *);
void addNODEKey(NODE *, NODE *);
NODE *deleteNode(NODE *);
NODE *popList(NODE *);

int main()
{
   
    NODE *newNode=NULL,*temp=NULL,*head=NULL;
    int ch=0, flag=0;
   
    while(1)
    {
        ch = dispMenu();
        switch (ch)
        {
        case 1: 
            newNode = (NODE *)createNNode();
            // newNode->next = NULL;
            head = appendList(newNode, head);
            dispList(head);
            break;
        case 2:
            newNode = (NODE *)createNNode();
            head = beginning(newNode, head);
            dispList(head);
            break;
        case 3: 
            newNode = (NODE *)createNNode();
            addNODEKey(newNode, head);
            dispList(head);
            break;
        case 4:
            head = deleteNode(head);
            dispList(head);
            break;
        case 5:
            head = popList(head); 
            dispList(head);
            break;
        case 6:
            dispList(head);
            break;
        case 7: 
            break;
        case 0:
            printf("\nEnd of the Program\n");
            flag = 1;
            break;
        default:
            printf("\nEnter the correct Choice\n");
            break;
        }

        if (flag == 1)
            break;
        
    }// end of while loop
   
       
    return 0;
}

void *createNNode()
{
    return (malloc(sizeof(NODE)));
}

void dispList(NODE *h)
{
    printf("\nList is\n");
    while(h)
    {
        printf("%d->", h->val);
        h = h->next;
    }
    printf("NULL\n\n");

}

int dispMenu()
{
    int ch = 0;
    printf("\nPress....");
    printf("\n1. Creating New Node");
    printf("\n2. Add Node to the Begining of the List");
    printf("\n3. Add Node after Key value");
    printf("\n4. Delete a node key value");
    printf("\n5. Pop the element from list");
    printf("\n6. Display List");
    printf("\n7. Sorting of List");
    printf("\n0. Exit");
    printf("\nChoice: ");
    scanf("%d",&ch);
    return ch; 
}

NODE *beginning(NODE *nn, NODE *head)
{
    NODE *temp = head;
    printf("\nadding at the beginning");
    printf("\nEnter the value of New Node: ");
    scanf("%d",&nn->val);
    nn->next = NULL;
    nn->next = head;
    head = nn;
}

NODE *appendList(NODE *nn, NODE *head)
{
    NODE *temp = head;
    printf("\nEnter the value of New Node: ");
    scanf("%d",&nn->val);
    nn->next = NULL;

    if(temp == NULL)
    {
        head = nn;
        temp = nn;
    }
    else
    {
        while(temp->next)
        {
            temp = temp->next;
        }
        temp->next = nn;
    }

    return head;
}

void addNODEKey(NODE *nn, NODE *head) {
    NODE *temp = head;  // Start iterating from the head
    int key, value;

    printf("\nEnter the value of KEY: ");
    scanf("%d", &key);
    printf("Add the new value for the new node: ");
    scanf("%d", &value);

    while (temp != NULL) {  // Check for NULL before accessing temp->next
        if (temp->val == key) {
            nn->next = temp->next;
            temp->next = nn;
            nn->val = value;
            return;  // Node inserted, no need to continue
        } else {
            temp = temp->next;
        }
    }

    // If key not found, insert at the end
    if (temp == NULL) {
        nn->next = NULL;  // Ensure new node's next pointer is NULL
        while (head->next != NULL) {
            head = head->next;  // Traverse to the last node
        }
        head->next = nn;
    }
}

NODE *deleteNode(NODE *head)
{
	NODE *temp=head;
	int key;
	NODE *ptr=NULL;
	printf("\nEnter the key : ");
	scanf("%d",&key);
	
	int count=0;
	while(temp->next)
	{
		
		
		if(count==0)
		{
			count++;
			if(temp->val==key)
			{
				head=temp->next;
				
				break;
					
			}
			
		}
		else
		{
			ptr=temp->next;
			
			if(ptr->val==key)
			{
				temp->next=ptr->next;
				break;
			}
			else
			{
				temp=temp->next;
				
			}
			
			
		}



	}
}
NODE *popList(NODE *head)
{
    NODE *temp=head;
    if (head == NULL)
    {
        head = NULL;
    }    
    else if(head->next==NULL){
        printf("\nPoped element : %d\n",head->val);
        head = NULL;
        return NULL;
    }
    else 
    {
        while(head->next->next !=NULL)
        {
            head = head->next;
        }
        if (head->next==NULL)
        {
            printf("\nPoped element : %d\n",head->val);
        }
        else 
        {
            printf("\nPoped element : %d\n",head->next->val);
            head->next = NULL;
        }
        head = temp;
        return head;
    }

    return head;
}

