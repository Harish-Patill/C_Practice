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