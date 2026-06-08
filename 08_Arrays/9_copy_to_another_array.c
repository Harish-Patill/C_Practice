#include<stdio.h>
int main(){
    int size=0;
    int size1=0;

    printf("Enter the size of array: ");
    scanf("%d",&size);
    
    int arr[size];
    int arr_1[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Copying the array elements into another array: \n");
    
    for(int i=0;i<size;i++){
        arr_1[i]=arr[i];
    }
    
    printf("Original array elements: \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    printf("Copied array elements: \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr_1[i]);
    }
    printf("\n");

    return 0;
}