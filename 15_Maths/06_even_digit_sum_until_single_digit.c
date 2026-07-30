#include<stdio.h>
int main(){
    int num=0;
    
    printf("Enter num: ");
    scanf("%d",&num);
    
    while(num>=10){
        int sum=0;
        int temp=num;

        while (temp>0){
            temp=num%10;
            if(temp%2 == 0){
                sum=sum+temp;
            }
            num=num/10;
        }
        num=sum;
    }

    printf("Final sum: %d\n",num);
    
    return 0;
}