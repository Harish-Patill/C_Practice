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
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    printf("The array elements after trnaspose:\n");
    transpose(row,col,arr);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
        
    return 0;
}

// The array elements are:
// 1 2 3 
// 4 5 6 
// 7 8 9 

// The array elements after trnaspose:
// 1 4 7 
// 2 5 8 
// 3 6 9 