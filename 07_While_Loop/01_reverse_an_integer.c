#include<stdio.h>
int main(){
    int num=0;
    int rev=0;
    
    printf("Enter the number: ");
    scanf("%d",&num);
    int original=num;

    while (num!=0){
        rev=rev*10 + num%10;
        num=num/10;
    }

    printf("The reverse of %d is: %d\n",original,rev);
    
    return 0;
}