// Check if a number is divisible by both 3 and 5, only 3, only 5, or neither — using nested if.

#include<stdio.h>
int main(){
    int num=0;
    printf("Enter num: ");
    scanf("%d",&num);

    if(num%3 == 0){
        if(num%5 == 0){
            printf("Divisible by 3 and 5\n");
        }
        else{
            printf("Divisible by only 3\n");
        }
    }
    else if(num%5 == 0){
        printf("Divisible by only 5\n");
    }
    else {
        printf("Divisible by neither\n");

    }

    return 0;
}