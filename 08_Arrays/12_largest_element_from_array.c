#include<stdio.h>
int largest_element(int arr[],int size){
    int max=arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]>max){
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
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("The Largest element from the array: %d\n",largest_element(arr,size));

    return 0;
}