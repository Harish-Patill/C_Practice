#include<stdio.h>
int main(){
    int size=0,min=0,max=0;
    printf("Enter the array size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elemenets: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }

    max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    printf("The max element: %d\n",max);
    printf("The min element: %d\n",min);


    return 0;
}