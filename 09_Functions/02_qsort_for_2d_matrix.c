#include <stdio.h>
#include <stdlib.h>

#define ROWS 4
#define COLS 3

int cmp(const void *a, const void *b){
    return (*(int *)a) - (*(int *)b);
}

int main(){
    int arr[ROWS][COLS]={
        {3,10,20},
        {1,40,50},
        {4,60,70},
        {2,80,90}
    };

    qsort(arr,ROWS,sizeof(arr[0]),cmp);

    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}


// this: 
// 3,10,20
// 1,40,50
// 4,60,70
// 2,80,90

// becomes this: 
// 1 40 50
// 2 80 90
// 3 10 20
// 4 60 70

// sorting is done based on the first element of each rowss.