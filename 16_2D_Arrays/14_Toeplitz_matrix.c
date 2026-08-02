#include <stdio.h>

int main(){
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);

    int arr[n][n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int flag=1;         
    for(int i=0;i<n;i++){                                   // PET qn, not an actual toeplitz matrix logic
        for(int j=0;j<n;j++){
            if(i==j){
                if(arr[i][j]!=arr[0][0]){
                    flag=0;
                }
            }
        }
    }
    
    if(flag) printf("Toeplitz Matrix\n");
    else printf("Not a Toeplitz Matrix\n");
    
    return 0;
}

// Actual toeplitz matrix logit(both the diagonal's elements need to be equal (top left to bottom right diagonal && top right to bottom left diagonal))

// int flag=1;
// for(int i=1;i<n;i++){
//     for(int j=1;j<n;j++){
//         if(arr[i][j]!=arr[i-1][j-1]){
//             flag=0;
//         }
//     }
// }