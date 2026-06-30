#include<stdio.h>

void unique_elemts(int arr[],int size){
    for(int i=0;i<size;i++){

        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count == 1){
            printf("%d ",arr[i]);
        }
    }
}

int main(){
    int size=0;
    printf("Enter the array size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Unique elements from the Array: ");
    unique_elemts(arr,size);
    printf("\n");

    return 0;
}