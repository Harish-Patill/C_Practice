#include<stdio.h>

void reverse_array(int arr[],int size){
    int temp=0;

    for(int i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-i-1]=temp;
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
    
    reverse_array(arr,size);
    
    printf("Array elements after reversing the array: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    

    return 0;
}