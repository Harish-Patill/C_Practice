#include<stdio.h>
int main(){
    int size1=0;
    int size2=0;
    
    printf("Size: ");
    scanf("%d",&size1);

    int arr1[size1];
    printf("Enter array elements: ");
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Size: ");
    scanf("%d",&size2);

    int arr2[size2];
    printf("Enter array elements: ");
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }

    printf("Common elements from both the arrays: ");
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i] == arr2[j]){
                printf("%d ",arr1[i]);
            }
        }
    }
    printf("\n");

    return 0;
}