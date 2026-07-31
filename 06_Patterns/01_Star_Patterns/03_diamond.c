// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter number of rows (half): ");
//     scanf("%d", &n);
    

//     // Upper half (including middle row)
//     for (int i=1;i<=n;i++) {
//         for (int s=0;s<n-i;s++)
//             printf(" ");
//         for (int j=0;j<2*i-1;j++)
//             printf("*");
//         printf("\n");
//     }

//     // Lower half
//     for (int i=n-1;i>=1;i--) {
//         for(int s=0;s<n-i;s++)
//             printf(" ");
//         for (int j=0;j<2*i-1;j++)
//             printf("*");
//         printf("\n");
//     }

//     return 0;
// }



#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int half=(n+1)/2;

    // Upper half (including middle row)
    for (int i=1;i<=half;i++) {
        for (int s=0;s<half-i;s++)
            printf(" ");
        for (int j=0;j<2*i-1;j++)
            printf("*");
        printf("\n");
    }

    // Lower half
    for (int i=half-1;i>=1;i--) {
        for (int s=0;s<half-i;s++)
            printf(" ");
        for (int j=0;j<2*i-1;j++)
            printf("*");
        printf("\n");
    }

    return 0;
}