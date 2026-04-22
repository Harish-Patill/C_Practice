// Show that & gives address and * gives the value at that address.

#include<stdio.h>
int main(){
    int num=0;
    int *ptr=&num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Printing &num: %d\n",*ptr);
    printf("Printing *ptr: %p\n",ptr);

    return 0;
}