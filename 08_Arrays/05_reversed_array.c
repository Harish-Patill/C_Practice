#include<stdio.h>
void swap(int arr[], int size){
    int temporary=0;

    for(int i=0;i<size/2;i++){
        temporary=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temporary;
    }
}

int main(){
    int size=0,temporary;
    printf("Enter array size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    //array swap here: 
    swap(arr,size);
    
    printf("The array elements in the reverse order: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}