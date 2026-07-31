#include<stdio.h>

int isPrime(int num) {
    int count=0;

    for(int i=1;i<=num/2;i++) {
        if(num%i==0) {
            count++;
        }
    }
    count++;

    if(count==2) {
        return 1;
    }
    else {
        return 0;
    }
}

int isPalindrome(int num) {
    int original=num;
    int rev=0;

    while(num>0) {
        int last=num%10;
        rev=rev*10+last;
        num=num/10;
    }

    if(original==rev) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int N;

    printf("Enter N: ");
    scanf("%d",&N);

    printf("Palindrome Prime Numbers: ");

    for(int i=2;i<=N;i++) {
        if(isPrime(i) && isPalindrome(i)) {
            printf("%d ",i);
        }
    }

    printf("\n");

    return 0;
}