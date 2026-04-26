// Check if a number is divisible by 2, 3, 5, or none — print all that apply.

#include<stdio.h>
int main(){
    int num=0;
    printf("Enter number: ");
    scanf("%d",&num);

    int flag=0;
    if(num%2 == 0){
        printf("Divisible by 2\n");
        flag=1;
    } 
    if(num%3 == 0){
        printf("Divisible by 3\n");
        flag=1;
    } 
    if(num%5 == 0){
        printf("Divisible by 5\n");
        flag=1;
    } 
    if(flag == 0) printf("Divisible by none\n");

    return 0;
}