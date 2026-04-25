#include<stdio.h>
int sum(int a){
    if(a == 0) return 0;                 //the logic runs till the a becomes 0, as we are adding the nums in this way >> 5+4+3+2+1;
    return sum(a-1)+a;                  //first 5 is same as >> first(4)+5.. ans so on..;
}

int main(){
    int num=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    int ans=sum(num);                                           //store in ans
    printf("Sum of the first %d numbers: %d\n",num,ans);       //ans print the ans
    
    return 0;
}

// sample output:

// Enter the number: 5
// Sum of the first 5 numbers: 15

