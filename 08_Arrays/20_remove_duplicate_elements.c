#include<stdio.h>
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
    
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;

            size;
        }   
    }

    printf("The array elements: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}