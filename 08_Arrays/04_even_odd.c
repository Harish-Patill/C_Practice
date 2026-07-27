#include<stdio.h>

void even_elements(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]%2 == 0){
            printf("%d ",arr[i]);
        }
    }
}

void odd_elements(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]%2 != 0){
            printf("%d ",arr[i]);
        }
    }
}


int main(){
    int size=0;
    printf("Enter size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Even elements from the array: ");
    even_elements(arr,size);
    printf("\n");
    
    printf(" Odd elements from the array: ");
    odd_elements(arr,size);
    printf("\n");

    return 0;
}