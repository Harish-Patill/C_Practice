#include<stdio.h>
void even(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }

}

void odd(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
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
    
    printf("The odd  elements from the array are: ");
    odd(arr,size);
    printf("\n");
    
    printf("The even elements from the array are: ");
    even(arr,size);
    printf("\n");

    return 0;
}