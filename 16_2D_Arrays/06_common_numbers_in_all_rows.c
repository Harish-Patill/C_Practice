#include<stdio.h>

void common_row_element(int row,int col,int arr[][col]){
    int element_found=0;

    for(int j=0;j<col;j++){
        int all_row_flag=1;


        for(int a=1;a<row;a++){
            int this_row_flag=0;

            for(int b=0;b<col;b++){
                if(arr[0][j] == arr[a][b]){
                    this_row_flag=1;
                    break;
                }
            }

            if(this_row_flag == 0){
                all_row_flag=0;
                break;
            }

        }
        if(all_row_flag){
            printf("%d ",arr[0][j]);
            element_found=1;
        }
    }
    
    if(!element_found){
        printf("There is no common element in all the rows");
    }
    printf("\n");

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

    common_row_element(row,col,arr);

    return 0;
}



// #include <stdio.h>

// int existsInRow(int col, int arr[], int value) {
//     for (int j = 0; j < col; j++) {
//         if (arr[j] == value) return 1;
//     }
//     return 0;
// }

// void common_row_element(int row, int col, int arr[][col]) {
//     for (int j = 0; j < col; j++) {
//         int candidate = arr[0][j];
//         int found_in_all_rows = 1;

//         for (int i = 1; i < row; i++) {
//             if (!existsInRow(col, arr[i], candidate)) {
//                 found_in_all_rows = 0;
//                 break;
//             }
//         }

//         if (found_in_all_rows) {
//             printf("%d ", candidate);
//         }
//     }
//     printf("\n");
// }

// int main() {
//     int row = 0, col = 0;

//     printf("Row: ");
//     scanf("%d", &row);

//     printf("Col: ");
//     scanf("%d", &col);

//     int arr[row][col];
//     printf("Enter array elements:\n");
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     printf("Common elements in all rows: ");
//     common_row_element(row, col, arr);

//     return 0;
// }