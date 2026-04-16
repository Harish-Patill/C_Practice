#include<stdio.h>
int main(){
    int num=0;

    printf("Enter the number: ");
    scanf("%d",&num);

    int flag=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }

    if(flag==0) printf("Prime Number\n");
    else printf("Not a Prime Number\n");

    return 0;
}