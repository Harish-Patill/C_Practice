#include<stdio.h>
int main(){
    int num=0;
    int count_one=0;

    printf("Enter the num: ");
    scanf("%d",&num);

    for(int n=31;n>=0;n--){
        if((num & (1<<n)) != 0){
            count_one++;
        }
    }

    if(count_one == 1){
        printf("%d is 2's Power\n",num);
    }
    else{
        printf("%d is Not 2's Power\n",num);
    }
    return 0;
}