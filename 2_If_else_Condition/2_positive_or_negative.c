#include<stdio.h>
int main(){
    int num=0;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num>=0)printf("POSITIVE\n");
    else printf("NEGATIVE\n");

    return 0;
}