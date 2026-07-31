#include<stdio.h>

void matrix_mul(int r1, int c1, int mat_a[r1][c1],
                int r2, int c2, int mat_b[r2][c2],
                int result[r1][c2]){

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            result[i][j]=0;

            for(int k=0;k<c1;k++){
                result[i][j] = result[i][j] + (mat_a[i][k]*mat_b[k][j]);
            }
        }
    }
}

int main(){

    int r1,c1,r2,c2;

    printf("Enter number of rows for Matrix A: ");
    scanf("%d",&r1);

    printf("Enter number of columns for Matrix A: ");
    scanf("%d",&c1);

    int mat_a[r1][c1];

    printf("Enter elements of Matrix A:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&mat_a[i][j]);
        }
    }

    printf("Enter number of rows for Matrix B: ");
    scanf("%d",&r2);

    printf("Enter number of columns for Matrix B: ");
    scanf("%d",&c2);

    if(c1!=r2){
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int mat_b[r2][c2];
    int result[r1][c2];

    printf("Enter elements of Matrix B:\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&mat_b[i][j]);
        }
    }

    matrix_mul(r1,c1,mat_a,r2,c2,mat_b,result);

    printf("Product of the matrices:\n");

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}