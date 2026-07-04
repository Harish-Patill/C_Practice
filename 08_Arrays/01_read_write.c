#include<stdio.h>
void scan(int arr[],int size){
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
}

int main(){
    int size=0;
    printf("Enter the array size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array elements: ");
    scan(arr,size);
    printf("The array elements are: ");
    print(arr,size);
    printf("\n");

    return 0;
}