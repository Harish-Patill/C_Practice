#include <stdio.h>
#include <math.h>

int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}

int armstrongSum(int n, int total_digits) {
    if (n == 0) return 0;
    int digit = n % 10;
    return (int)pow(digit, total_digits) + armstrongSum(n / 10, total_digits);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int digits = countDigits(num);
    int sum = armstrongSum(num, digits);

    if (sum == num) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}