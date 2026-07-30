#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements (0s and 1s): ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int count = 0, max_count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
            if (count > max_count) {
                max_count = count;
            }
        } else {
            count = 0;
        }
    }

    printf("Max consecutive 1's: %d\n", max_count);

    return 0;
}