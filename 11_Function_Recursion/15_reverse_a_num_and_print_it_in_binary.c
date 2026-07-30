#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0) return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

void printBinary(int n) {
    if (n == 0) return;
    printBinary(n / 2);            // recurse first — go deeper before printing
    printf("%d", n % 2);           // print on the way back up
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int reversed = reverseNumber(num, 0);
    printf("Reversed number: %d\n", reversed);

    printf("Binary of reversed number: ");
    if (reversed == 0) printf("0");
    else printBinary(reversed);
    printf("\n");

    return 0;
}