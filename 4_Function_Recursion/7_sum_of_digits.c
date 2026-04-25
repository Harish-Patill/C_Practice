#include<stdio.h>
int digit(int a){
    if(a == 0) return 0;                    //if a becomes 0 it will return 0, which when added dosent change output;
    int rem=a%10;                          //finds the remainder;
    return digit(a/10)+rem;               //will add the remainder and the remaining elements;
}

int main(){
    int num=0;

    printf("Enter digit :");
    scanf("%d",&num);

    int ans=digit(num);
    printf("Sum of all %d elements is %d\n",num,ans);
    return 0;
}

// sample output:

// Enter digit :123
// Sum of all 123 elements is 6