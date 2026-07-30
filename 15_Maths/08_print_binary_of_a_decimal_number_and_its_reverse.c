#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    char binary[32];
    int i = 0;

    if (n == 0) binary[i++] = '0';
    while (n > 0) {
        binary[i] = (n % 2) + '0';   // storing, not printing yet
        n = n / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)   // print backward → forward binary
        printf("%c", binary[j]);
    printf("\n");

    printf("Reversed binary: ");
    for (int j = 0; j < i; j++)        // print forward → reversed binary
        printf("%c", binary[j]);
    printf("\n");

    return 0;
}