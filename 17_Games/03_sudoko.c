#include<stdio.h>
#include<stdbool.h>

int arr[9][9];

int checkGroup(int vals[9]){
    bool seen[10] = {0};   // index 1-9 used
    for(int k=0; k<9; k++){
        int v = vals[k];
        if(v < 1 || v > 9 || seen[v]) return 0;
        seen[v] = 1;
    }
    return 1;
}

int main(){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // rows
    for(int i=0;i<9;i++){
        if(!checkGroup(arr[i])){
            printf("Wrong layout\n");
            return 0;
        }
    }

    // columns
    for(int j=0;j<9;j++){
        int col[9];
        for(int i=0;i<9;i++) col[i]=arr[i][j];
        if(!checkGroup(col)){
            printf("Wrong layout\n");
            return 0;
        }
    }

    // 3x3 boxes
    for(int br=0; br<9; br+=3){
        for(int bc=0; bc<9; bc+=3){
            int box[9], k=0;
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                    box[k++] = arr[br+i][bc+j];
            if(!checkGroup(box)){
                printf("Wrong layout\n");
                return 0;
            }
        }
    }

    printf("Valid layout\n");
    return 0;
}