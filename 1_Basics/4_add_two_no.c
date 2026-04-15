#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two numbers seperated by a space: ");
    scanf("%d %d",&num1,&num2);

    printf("The sum of %d and %d is: %d\n",num1,num2,num1+num2);

    return 0;
}