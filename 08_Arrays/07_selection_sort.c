#include<stdio.h>
int main(){
    int size=0;
    int min=0;
    int min_index=0;
    int temp=0;

    printf("Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array size: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size-1;i++){
        min=arr[i];
        min_index=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<min){
                min=arr[j];
                min_index=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }

    printf("The array Elements are: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}