#include<stdio.h>
int remove_duplicates(int arr[],int arr1[],int size){
    int new_index=0;

    for(int  i=0;i<size;i++){
        int added=0;

        for(int j=0;j<i;j++){
            if(arr[i] == arr[j]){
                added=1;
                break;
            }
        }

        if(added == 0){
            arr1[new_index]=arr[i];
            new_index++;
        }
    }

    return new_index;
}

int main(){
    int size=0;
    printf("Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int arr1[size];
    int new_size=remove_duplicates(arr,arr1,size);

    printf("Array after removing duplicates: ");
    for(int i=0;i<new_size;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");

    return 0;
}