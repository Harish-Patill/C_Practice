#include<stdio.h>
int main(){
    int n1,n2,temp;
    printf("Enter first and second num: ");
    scanf("%d %d",&n1,&n2);
    
    printf("First and second num befor swap: %d, %d \n",n1,n2);

    temp=n1;
    n1=n2;
    n2=temp;
    
    printf("First and second num after swap: %d, %d \n",n1,n2);

    return 0;
}