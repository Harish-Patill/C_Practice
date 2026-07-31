#include <stdio.h>

int main() {
    printf("Palindrome numbers between 100 and 200: ");

    for (int n = 100; n <= 200; n++) {
        if (n % 10 == n / 100) {
            printf("%d ", n);
        }
    }
    printf("\n");

    return 0;
}

// Palindrome numbers between 100 and 200: 101 111 121 131 141 151 161 171 181 191 