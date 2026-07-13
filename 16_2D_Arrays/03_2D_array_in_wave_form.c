#include<stdio.h>
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

    printf("Waveform: ");
    for(int j=0;j<col;j++){

        // the top to bottom logic
        if(j%2 == 0){
            for(int i=0;i<row;i++){
                printf("%d ",arr[i][j]);
            }
        }
        
        // the bottom to top logic
        if(j%2 != 0){
            for(int i=row-1;i>=0;i--){                          // this will run the i iteration from bottom to top;
                printf("%d ",arr[i][j]);
            }
        }
    }
    printf("\n");
    
    return 0;
}