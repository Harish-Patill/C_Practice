#include<stdio.h>
int prime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0) return 0;
    }
    return 1;
}

int main(){
    int n=0;
    printf("Enter the n value: ");
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        if(prime(i)) printf("%d ",i);
    }
    printf("\n");

    return 0;
}