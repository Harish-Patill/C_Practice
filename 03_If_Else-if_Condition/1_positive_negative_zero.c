#include<stdio.h>
int main(){
    int num=0;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num == 0) printf("Entered num is Zero\n");
    else if(num>0) printf("Entered num is Positive\n");
    else printf("Entered num is Negative\n");

    return 0;
    
}