#include<stdio.h>
int main(){
    int num=0;
    int count=0;

    printf("Enter the number: ");
    scanf("%d",&num);

    for(int n=31;n>=0;n--){
        if((num & (1<<n)) == 0){
            count++;
        }
        else{
            break;
        }
    }
    printf("Total number of leading zero's in %d is %d\n",num,count);

    return 0;
}