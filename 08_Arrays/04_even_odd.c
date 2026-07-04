#include<stdio.h>
void array_even(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]%2 == 0){
            printf("%d ",arr[i]);
        }
    }
}

void array_odd(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]%2 != 0){
            printf("%d ",arr[i]);
        }
    }

}

int main(){
    int size=0;
    printf("Enter size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array size: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Even elements from the array : ");
    array_even(arr,size);
    printf("\n");
    
    printf("Odd elements from the array  : ");
    array_odd(arr,size);
    printf("\n");

    return 0;
}