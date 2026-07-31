#include <stdio.h>

#define MISSING -1

void transpose(int row, int col, int arr[][col]) {
    int temp = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i < j) {
                temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
}

void printMatrix(int row, int col, int arr[][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == MISSING)
                printf("_ ");
            else
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int row, col;

    printf("Row: ");
    scanf("%d", &row);
    printf("Col: ");
    scanf("%d", &col);

    int arr[row][col];
    printf("Enter array elements (enter -1 for the missing element):\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Original matrix:\n");
    printMatrix(row, col, arr);

    transpose(row, col, arr);

    printf("Transposed matrix:\n");
    printMatrix(row, col, arr);

    return 0;
}



// Input:
// 1  2  3
// 4  5 -1
// 7  8  9

// Printed as:

// 1 2 3
// 4 5 _
// 7 8 9

// transpose:
// 1 4 7
// 2 5 8
// 3 _ 9