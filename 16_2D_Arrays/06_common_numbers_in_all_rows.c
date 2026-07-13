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
