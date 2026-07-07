#include<stdio.h>
int main(){
    int size=0;
    int flag=0;

    printf("Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            flag=1;
        }
    }

    if(flag){
        printf("The array is not Sorted\n");
        return 0;
    }
    printf("Array is Sorted\n");

    return 0;
}