#include<stdio.h>

void copy_elements_to_new_array(int arr[],int new_arr[],int size){
    for(int i=0;i<size;i++){
        new_arr[i]=arr[i];
    }
}

int main(){
    int size=0;
    printf("Enter size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    int new_arr[size];
    copy_elements_to_new_array(arr,new_arr,size);
    
    printf("New array elements: ");
    for(int i=0;i<size;i++){
        printf("%d ",new_arr[i]);
    }
    printf("\n");

    return 0;
}