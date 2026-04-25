// Declare a pointer, assign it an address, and print the address and value.

#include<stdio.h>
int main(){
    int num=0;
    int *ptr=&num;

    printf("Enter a number: ");
    scanf("%d",&num);
    
    printf("\nEntered number: %d\n",num);
    printf("    Address   : %p\n",ptr);

    return 0;
}