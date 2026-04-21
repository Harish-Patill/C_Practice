#include<stdio.h>
int main(){
    int num=0,count=0;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    int ref=num;

    while(num>0){
        num=num/10;
        count++;
    }

    printf("The number of digits in %d is %d\n",ref,count);

}