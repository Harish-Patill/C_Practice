#include<stdio.h>

void array_row_sum(int row,int col,int arr[][col]){
    for(int i=0;i<row;i++){
        int ans=0;

        for(int j=0;j<col;j++){
            ans=ans+arr[i][j];    
        }
        printf("%d row: %d\n",i,ans);
    }   
}

void array_col_sum(int row,int col,int arr[][col]){
    for(int i=0;i<col;i++){
        int ans=0;
    
        for(int j=0;j<row;j++){
            ans=ans+arr[j][i];    
        }
        printf("%d col: %d\n",i,ans);
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

    printf("Row elements sum:\n");
    array_row_sum(row,col,arr);

    printf("Col elements sum:\n");
    array_col_sum(row,col,arr);
    
    return 0;
}