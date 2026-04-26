#include<stdio.h>
#include<math.h>

int main(){
    int num, original, temp, rem, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    // Step 1: Count digits
    while(temp > 0){
        digits++;
        temp = temp / 10;
    }

    // Step 2: Calculate sum of powers
    while(num > 0){
        rem = num % 10;
        sum = sum + pow(rem, digits);
        num = num / 10;
    }

    // Step 3: Check
    if(sum == original)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

        
    return 0;
}