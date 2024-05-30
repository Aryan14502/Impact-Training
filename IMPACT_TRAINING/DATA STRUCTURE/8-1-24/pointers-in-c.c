#include<stdio.h>

int main()
{
    int arr[3]={1,2,3};
    int *ptr=NULL;
    int *temp=NULL;

    ptr = arr;
    printf("\n%d",*ptr);
    ptr = ptr+1;
    printf("\n%d",*ptr);
    ptr = ptr++;
    printf("\n%d",*ptr);
    ptr = ptr++;
    printf("\n%d",*ptr);
    return 0;
}
