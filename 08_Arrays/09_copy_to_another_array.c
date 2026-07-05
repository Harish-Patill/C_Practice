#include<stdio.h>
void array_copying(int arr[],int new_array[], int size){
    for(int i=0;i<size;i++){
        new_array[i]=arr[i];
    }
}

int main(){
    int size=0;
    printf("Size: ");
    scanf("%d",&size);

    int arr[size];
    int new_array[size];

    printf("Enter the array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    array_copying(arr,new_array,size);
    printf("The new array elements  : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}