#include<stdio.h>
int factorial(int a){
    if(a == 0) return 1;                //returns 1 when a reaches 0;
    return factorial(a-1)*a;           //does this logic >> factorial of 5 is >>factorial(4)*5.. and continues;
}

int main(){
    int num=0;
    printf("Enter the num: ");
    scanf("%d",&num);

    int ans=factorial(num);
    printf("The factorial of %d is %d\n",num,ans);

    return 0;
}

// sample output:

// Enter the num: 3
// The factorial of 3 is 6
