#include<stdio.h>
int main(){
    int num=0;
    printf("Enter the size: ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        for(int j=num;j>=i;j--){
            printf("* ");
            
        }
        printf("\n");
        
    }
    return 0;
}