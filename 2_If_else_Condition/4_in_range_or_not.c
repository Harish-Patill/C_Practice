// WAP to check whether number is between 50 to 100

#include<stdio.h>
int main(){
    int num=0;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num>=50 && num<=100) printf("%d is in range\n",num);
    else printf("%d is not in range\n",num);

    return 0;
}