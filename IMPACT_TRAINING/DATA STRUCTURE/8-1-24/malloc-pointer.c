#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr=NULL,*temp=NULL;
    ptr = (int*)malloc(3*sizeof(int));
    temp = ptr;
    printf("Address of ptr = %u",&ptr);
    *ptr=10;
    printf("\naddres of %u and its value %d\n",ptr,*ptr);
    ptr++; //here ++ means moving forward of the pointer to the next element in the array
    *ptr = 20;
    printf("\naddres of %u and its value %d\n",ptr,*ptr);
    ptr++;
    *ptr = 30;
    printf("\naddres of %u and its value %d\n",ptr,*ptr);
    ptr = temp;
    printf("\naddres of %u and its value %d\n",ptr,*ptr);
    ptr++;
    printf("\n%d\n",ptr[2]); //garbage value as there is nothing on the 2nd element in the array 
}
