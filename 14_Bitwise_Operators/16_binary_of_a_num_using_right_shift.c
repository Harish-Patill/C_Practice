#include<stdio.h>
int main(){
    int num=0;
    int n=0;

    printf("Enter the number: ");
    scanf("%d",&num);

    for(int n=31;n>=0;n--){
        if(((unsigned)num >> n) & 1 == 0){
            printf("0");
        }
        else{
            printf("1");
        }
    }
    printf("\n");

    return 0;
}