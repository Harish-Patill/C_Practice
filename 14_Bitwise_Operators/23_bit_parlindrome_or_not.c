#include<stdio.h>

int main() {
    int num;
    int bits[32];
    int count=0;
    int flag=1;

    printf("Enter number: ");
    scanf("%d",&num);

    int temp=num;

    while(temp>0) {
        bits[count]=temp%2;
        temp=temp/2;
        count++;
    }

    for(int i=0,j=count-1;i<j;i++,j--) {
        if(bits[i]!=bits[j]) {
            flag=0;
            break;
        }
    }

    if(flag) {
        printf("Bit Palindrome\n");
    }
    else {
        printf("Not a Bit Palindrome\n");
    }

    return 0;
}
