#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    char binary[32];
    int i = 0;

    if (n == 0) binary[i++] = '0';
    while (n > 0) {
        binary[i] = (n % 2) + '0';
        n = n / 2;
        i++;
    }
    // binary[] is already the reversed binary — no extra reverse step needed

    int decimal_value = 0;
    for (int j = 0; j < i; j++) {
        decimal_value = decimal_value * 2 + (binary[j] - '0');
    }

    printf("Decimal after reversing: %d\n", decimal_value);
    printf("Last digit: %d\n", decimal_value % 10);

    return 0;
}