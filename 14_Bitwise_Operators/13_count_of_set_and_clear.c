#include<stdio.h>
int main(){
    int num=0;
    int n=0;

    int count_one=0;
    int count_zero=0;

    printf("Enter the number: ");
    scanf("%d",&num);

    for(int n=31;n>=0;n--){
        if((num & (1<<n)) == 0){
            count_zero++;
        }
        else{
            count_one++;
        }
    }
    printf("Total number of set bits: %d\n",count_one);
    printf("Total number of clear bits: %d\n",count_zero);

    return 0;
}