#include<stdio.h>

int isPrime(int num) {
    int count=0;

    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            count++;
        }
    }
    count++;

    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int total_nums;

    printf("Enter how many prime numbers to print: ");
    scanf("%d",&total_nums);

    int found=0;
    int num=2;

    while(found<total_nums) {
        if(isPrime(num)) {
            printf("%d ",num);
            found++;
        }

        num++;
    }

    printf("\n");

    return 0;
}