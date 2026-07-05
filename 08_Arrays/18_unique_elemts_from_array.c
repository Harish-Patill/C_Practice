#include<stdio.h>
int main(){
    int size=0;
    
    printf("Size: ");
    scanf("%d",&size);
    
    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Non Repeated elements from the array: ");
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
    printf("\n");

    return 0;
}