#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements (0s and 1s): ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
        } else {
            break;   // stop as soon as the streak breaks
        }
    }

    printf("First consecutive 1's: %d\n", count);

    return 0;
}