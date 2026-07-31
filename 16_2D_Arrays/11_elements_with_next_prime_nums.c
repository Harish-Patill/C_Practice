#include<stdio.h>
int isPrime(int num) {
    int count=0;

    for(int i=1;i<=num/2;i++) {
        if(num%i==0) {
            count++;
        }
    }
    count++;

    if(count==2) {
        return 1;
    }
    else {
        return 0;
    }
}

int nextPrime(int num) {
    while(!isPrime(num)) {
        num++;
    }

    return num;
}

int main() {
    int row,col;

    printf("Enter rows and columns: ");
    scanf("%d%d",&row,&col);

    int arr[row][col];
    printf("Enter matrix elements:\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Output Matrix:\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            arr[i][j]=nextPrime(arr[i][j]);
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}