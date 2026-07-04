#include<stdio.h>
int array_min(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int array_max(int arr[],int size){
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
    printf("Enter array size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elemets: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Minimum element from the array: %d\n",array_min(arr,size));               
    printf("Maximun element from the array: %d\n",array_max(arr,size));               

    return 0;
}