#include<stdio.h>
int main(){
    int n1=0,n2=0,n3=0;
    printf("Enter nums: ");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1 >= n2 && n1 >= n3){
        printf("%d is greatest\n",n1);
    }
    else if(n2 >= n1 && n2 >= n3){
        printf("%d is greatest\n",n2);
    }
    else{
        printf("%d is greatest\n",n3);
    }

    return 0;
}