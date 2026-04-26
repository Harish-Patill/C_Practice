#include<stdio.h>
int main(){
    int num=0;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num<0){
        printf("The absolute value of %d is %d\n",num,num-(2*num));
    }
    else
        printf("The absolute value of %d is %d\n",num,num);

    return 0;
}