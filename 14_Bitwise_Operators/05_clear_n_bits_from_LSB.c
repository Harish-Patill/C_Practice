#include<stdio.h>
int main(){
    int num=0;
    int n=0;

    printf("Enter the number: ");
    scanf("%d",&num);
    
    printf("Enter n position to set: ");
    scanf("%d",&n);

    num=num & ~((1<<n)-1);

    printf("The Number after the operation: ");
    printf("%d",num);
    printf("\n");


    return 0;
}