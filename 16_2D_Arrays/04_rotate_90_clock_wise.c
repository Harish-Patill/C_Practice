#include<stdio.h>

void transpose(int row, int col, int arr[][col]){
    int temp=0;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i<j){
                temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }
}

void reverse_row(int row,int col,int arr[][col]){
    int temp=0;

    for(int i=0;i<row;i++){
        for(int j=0; j<col/2; j++){
            temp = arr[i][j];
            arr[i][j] = arr[i][col-1-j];
            arr[i][col-1-j] = temp;
        }
    }
}

int main(){
    int row=0,col=0;

    printf("Row: ");
    scanf("%d",&row);

    printf("Col: ");
    scanf("%d",&col);

    int arr[row][col];
    printf("Enter array elements:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
        
    transpose(row,col,arr);
    reverse_row(row,col,arr);
    printf("After Rotating Clock wise 90 degree:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}




// **Starting matrix:**

// 1 2 3
// 4 5 6
// 7 8 9


// **Step 1: `transpose()`**

// temp = arr[0][1]; arr[0][1] = arr[1][0]; arr[1][0] = temp;   // swap 2 and 4
// temp = arr[0][2]; arr[0][2] = arr[2][0]; arr[2][0] = temp;   // swap 3 and 7
// temp = arr[1][2]; arr[1][2] = arr[2][1]; arr[2][1] = temp;   // swap 6 and 8

// Result after transpose:
// 1 4 7
// 2 5 8
// 3 6 9

// **Step 2: `reverse_row()`**

// Row 0: 1 4 7 → reverse → 7 4 1
// Row 1: 2 5 8 → reverse → 8 5 2
// Row 2: 3 6 9 → reverse → 9 6 3


// Final result:

// 7 4 1
// 8 5 2
// 9 6 3

