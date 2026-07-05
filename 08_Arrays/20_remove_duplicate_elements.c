#include<stdio.h>
int remove_duplicate(int arr[],int size,int arr1[]){
    int new_index=0;
    for(int i=0;i<size;i++){        
        int stored=0;

        for(int k=0;k<i;k++){
            if(arr[k] == arr[i]){
                stored=1;
                break;
            }
        }

        if(stored == 0){
            arr1[new_index]=arr[i];
            stored=1;
            new_index++;
        }
    }

    return new_index;

}

int main(){
    int size=0;
    int temp=0;
    
    printf("Size: ");
    scanf("%d",&size);
    
    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    int size1=size;
    int arr1[size1];
    int new_index=remove_duplicate(arr,size,arr1);
    printf("Array elements after removing the duplicate elements: ");
    for(int i=0;i<new_index;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");

    return 0;
}