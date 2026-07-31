#include <stdio.h>

void printSpiral(int row, int col, int arr[][col]) {
    int top = 0, bottom = row - 1;
    int left = 0, right = col - 1;

    while (top <= bottom && left <= right) {

        // move right across the top row
        for (int j = left; j <= right; j++)
            printf("%d ", arr[top][j]);
        top++;

        // move down the right column
        for (int i = top; i <= bottom; i++)
            printf("%d ", arr[i][right]);
        right--;

        // move left across the bottom row (only if a row remains)
        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                printf("%d ", arr[bottom][j]);
            bottom--;
        }

        // move up the left column (only if a column remains)
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", arr[i][left]);
            left++;
        }
    }
    printf("\n");
}

int main() {
    int row, col;

    printf("Row: ");
    scanf("%d", &row);
    printf("Col: ");
    scanf("%d", &col);

    int arr[row][col];
    printf("Enter array elements:\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Spiral order: ");
    printSpiral(row, col, arr);

    return 0;
}

// Row: 3
// Col: 3
// Enter array elements:
// 1 2 3
// 4 5 6
// 7 8 9

// Spiral order: 1 2 3 6 9 8 7 4 5 