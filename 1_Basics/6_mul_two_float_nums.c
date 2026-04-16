#include<stdio.h>
int main(){

    float num1;
    float num2;

    printf("Enter two numbers: ");
    scanf("%f %f",&num1,&num2);

    float ans=num1 * num2;

    printf("The product of %f and %f is : %f\n",num1,num2,ans);

    return 0;
}