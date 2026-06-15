#include<stdio.h>
void read(int arr[], int size){
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}
void write(int arr[], int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int size=0;
    printf("Enter array size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    read(arr,size); 
    // printf("\n");
    
    printf("The entered array elements are: ");
    write(arr,size);    
    printf("\n");

    return 0;
}