#include<stdio.h>
int minimum(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int maximum(int arr[],int size){
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
    printf("Enter the array size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elemenets: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int min=minimum(arr,size);
    int max=maximum(arr,size);



    printf("The max element: %d\n",max);
    printf("The min element: %d\n",min);


    return 0;
}