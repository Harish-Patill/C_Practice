#include<stdio.h>
int main(){
    int num1=0,num2=0;
    int smallest_num=0;

    printf("Enter num1: ");
    scanf("%d",&num1);

    printf("Enter num2: ");
    scanf("%d",&num2);

    if(num1<num2){
        smallest_num=num1;
    }
    else{
        smallest_num=num2;
    }

    for(int i=smallest_num;i>=1;i--){
        if((num1%i == 0) && (num2%i == 0)){
            printf(" GCD of %d and %d: %d ",num1,num2,i);
            return 0;
        }        
    }

    
    return 0;
}