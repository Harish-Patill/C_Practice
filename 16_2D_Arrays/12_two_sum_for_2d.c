#include<stdio.h>

int main() {
    int arr[5][5];
    int target;
    int found=0;

    printf("Enter 5x5 matrix elements:\n");

    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Enter target: ");
    scanf("%d",&target);

    // Check rows
    for(int i=0;i<5 && !found;i++) {
        for(int j=0;j<5 && !found;j++) {
            for(int k=j+1;k<5;k++) {
                if(arr[i][j]+arr[i][k]==target) {
                    printf("Found in Row %d: %d + %d = %d\n",i+1,arr[i][j],arr[i][k],target);
                    found=1;
                    break;
                }
            }
        }
    }

    // Check columns
    for(int j=0;j<5 && !found;j++) {
        for(int i=0;i<5 && !found;i++) {
            for(int k=i+1;k<5;k++) {
                if(arr[i][j]+arr[k][j]==target) {
                    printf("Found in Column %d: %d + %d = %d\n",j+1,arr[i][j],arr[k][j],target);
                    found=1;
                    break;
                }
            }
        }
    }

    // Check main diagonal
    for(int i=0;i<5 && !found;i++) {
        for(int j=i+1;j<5;j++) {
            if(arr[i][i]+arr[j][j]==target) {
                printf("Found in Main Diagonal: %d + %d = %d\n",arr[i][i],arr[j][j],target);
                found=1;
                break;
            }
        }
    }

    // Check secondary diagonal
    for(int i=0;i<5 && !found;i++) {
        for(int j=i+1;j<5;j++) {
            if(arr[i][4-i]+arr[j][4-j]==target) {
                printf("Found in Secondary Diagonal: %d + %d = %d\n",arr[i][4-i],arr[j][4-j],target);
                found=1;
                break;
            }
        }
    }

    if(!found) {
        printf("Target cannot be formed.\n");
    }

    return 0;
}