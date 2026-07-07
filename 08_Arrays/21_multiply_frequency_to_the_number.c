#include<stdio.h>
int main(){
    int size=0;
    int element=0;
    int element_count=0;

    printf("Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the element: ");
    scanf("%d",&element);
    
    for(int i=0;i<size;i++){
        if(arr[i] == element){
            element_count++;
        }
    }
    
    for(int i=0;i<size;i++){
        if(arr[i] == element){
            arr[i]=(arr[i]) * (element_count);
        }
    }
    
    printf("The array elements: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    

    return 0;
}