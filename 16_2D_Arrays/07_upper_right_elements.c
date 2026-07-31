#include<stdio.h>

int main(){
    int row=0;
    int col=0;

    printf("Enter row: ");
    scanf("%d",&row);
    printf("Enter column: ");
    scanf("%d",&col);
    
    int arr[row][col];
    printf("Enter array elements:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The array elements are:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(j>=i){
                printf("%2d",arr[i][j]);
            }
            else printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}


// Enter row: 3
// Enter column: 3
// Enter array elements:
// 1 2 3
// 4 5 6
// 7 8 9
// The array elements are:
//  1 2 3
//    5 6
//      9