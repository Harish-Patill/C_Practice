#include<stdio.h>

int array_min(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i] < min){
            min=arr[i];
        }
    }
    
    return min;
}

int array_max(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i] > max){
            max=arr[i];
        }
    }
    
    return max;
}

int main(){
    int size=0;
    printf("Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("The Min element form the array: %d\n",array_min(arr,size));
    printf("The Max element form the array: %d\n",array_max(arr,size));

    return 0;
}