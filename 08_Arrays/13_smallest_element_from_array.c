#include<stdio.h>
int smallest_element(int arr[],int size){
    int min=arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int size=0;
    printf("Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("The Smallest element from the array: %d\n",smallest_element(arr,size));

    return 0;
}