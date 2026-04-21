#include<stdio.h>
int main(){
    int num=0;
    printf("Enter a number more than 2 digits: ");
    scanf("%d",&num);

    printf("The last digit of %d is %d\n",num,num%10);


}