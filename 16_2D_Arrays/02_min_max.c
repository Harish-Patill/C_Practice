#include<stdio.h>
int array_minimum(int row,int col,int arr[][col]){
    int min=arr[0][0];
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }

    return min;
}

int array_maximum(int row,int col,int arr[][col]){
    int max=arr[0][0];
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }

    return max;
}

int main(){
    int row=0;
    int col=0;

    printf("Row size: ");
    scanf("%d",&row);

    printf("Column size: ");
    scanf("%d",&col);

    int arr[row][col];
    printf("Enter array elements:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The Smallest element from the array: %d\n",array_minimum(row,col,arr));
    printf("The Largest  element from the array: %d\n",array_maximum(row,col,arr));
    
    return 0;
}