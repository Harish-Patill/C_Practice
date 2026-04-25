#include<stdio.h>
int counting(int a){
    if(a < 10) return 1;            //will return 1 for all the values less than 10, like 9 8 7 6 5 4 3 2 1 0; (ofc the negative test case isnt handled here)
    return counting(a/10)+1;       //will reduce a with last num and add 1, and go on until it becomes 0...;
}

int main(){
    int num=0;
    printf("Enter the number :");
    scanf("%d",&num);

    int ans=counting(num);
    printf("Total digits is %d is %d\n",num,ans);

    return 0;
}

// sample output:

// Enter the number :1234
// Total digits is 1234 is 4