#include<stdio.h>
int main(){
    int num=0;
    int n=0;

    printf("Enter the number: ");
    scanf("%d",&num);

    printf("The nth bit: ");
    scanf("%d",&n);

    if((num & (1<<n)) == 0){
        printf("0");
    }
    else{
        printf("1");
    }
    printf("\n");

    return 0;
}