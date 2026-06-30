#include<stdio.h>
int main(){
    int num=0;

    printf("Enter the num: ");
    scanf("%d",&num);

    // num=num & ((1<<1)-1);
    num=num & 1;

    if(num == 1){
        printf("Odd");
    }
    else{
        printf("Even");
    }
    printf("\n");

    return 0;
}