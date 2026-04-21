#include<stdio.h>
int main(){
    int num=0;
    printf("Enter a number more than 2 digits: ");
    scanf("%d",&num);
    
    num=num/10;
    printf("After removing the last digit, we get: %d\n",num);
    
    return 0;
}