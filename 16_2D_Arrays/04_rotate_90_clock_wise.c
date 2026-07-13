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



