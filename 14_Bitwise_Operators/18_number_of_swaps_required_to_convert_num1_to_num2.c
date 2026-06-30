#include<stdio.h>
int main(){
    int num1=0;
    int num2=0;
    int count_one=0;

    printf("Enter the Num1: ");
    scanf("%d",&num1);

    printf("Enter the Num2: ");
    scanf("%d",&num2);

    int ans=num1 ^ num2;

    for(int n=31;n>=0;n--){
        if((ans & (1<<n)) != 0){
            count_one++;
        }
    }
    printf("The total number of swaps required to convert %d to %d is: %d\n",num1,num2,count_one);

    return 0;
}