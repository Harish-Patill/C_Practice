#include<stdio.h>

int finding_element(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i] == element){
            return 1;
        }
    }

    return 0;
}

int main(){
    int size=0;
    int element=0;

    printf("Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element you want to search: ");
    scanf("%d",&element);

    if(finding_element(arr,size,element)){
        printf("%d is Present in the array.\n",element);
    }
    else{
        printf("%d is Not Present in the array\n",element);
    }
    
    return 0;
}