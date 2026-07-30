#include <stdio.h>

int main() {
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);

    // Count set bits (same masking idea as the power-of-2 check)
    int count_one = 0;
    for (int n = 31; n >= 0; n--){
        if ((num & (1 << n)) != 0){
            count_one++;
        }
    }

    if (count_one % 2 != 0) {
        printf("Set-bit count is odd (%d)\n", count_one);
    } 
    else{
        // Build binary digits via %2, /2 — this is already the reversed order
        char binary[32];
        int i = 0;
        int temp = num;

        if (temp == 0){
            binary[i++] = '0';
        }
        
        while(temp > 0){
            binary[i] = (temp % 2) + '0';
            temp = temp / 2;
            i++;
        }

        printf("Set-bit count is even (%d). Reversed bits: ", count_one);
        for (int j = 0; j < i; j++)
            printf("%c", binary[j]);
        printf("\n");
    }

    return 0;
}