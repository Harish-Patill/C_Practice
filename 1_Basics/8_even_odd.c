#include<stdio.h>
int main(){
    int num=0;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num%2 == 0) printf("Even\n");
    else printf("Odd\n");
}