// #include <stdio.h>

// int main() {
//     int rows;
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);

//     int prev[100] = {0};   // previous row's values

//     for (int i = 0; i < rows; i++) {
//         int curr[100];

//         for (int j = 0; j <= i; j++) {
//             if (j == 0 || j == i){
//                 curr[j] = 1;   // edges of the triangle are always 1
//             }
//             else{
//                 curr[j] = prev[j - 1] + prev[j];   // sum of the two above
//             }
//             printf("%d ", curr[j]);
//         }
//         printf("\n");

//         for (int j = 0; j <= i; j++){
//             prev[j] = curr[j];   // save this row for the next iteration
//         }
//     }

//     return 0;
// }



#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i=0;i<rows;i++) {
        int val=1;
        for(int j=0;j<=i;j++) {
            printf("%d ",val);
            val=val*(i-j)/(j+1);
        }
        printf("\n");
    }

    return 0;
}

// Enter number of rows: 5

// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 