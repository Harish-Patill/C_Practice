#include<stdio.h>
int main(){
    int size=0;
    printf("Enter the array size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("The odd  elements from the array are: ");
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
    
    printf("The even elements from the array are: ");
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }
    printf("\n");

    return 0;
}