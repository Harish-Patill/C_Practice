#include<stdio.h>
int main(){
    float num1,num2;

    printf("Enter numbers: ");
    scanf("%f %f",&num1,&num2);

    printf("Remainder of %g/%g is %g\n",num1,num2,num1/num2);
}