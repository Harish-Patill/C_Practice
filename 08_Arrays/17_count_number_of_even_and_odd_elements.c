#include<stdio.h>

int even_count(int arr[],int size){
    int count=0;

    for(int i=0;i<size;i++){
        if(arr[i]%2 == 0){
            count++;
        }
    }

    return count;
}

int odd_count(int arr[],int size){
    int count=0;

    for(int i=0;i<size;i++){
        if(arr[i]%2 != 0){
            count++;
        }
    }

    return count;
}

int main(){
    int size=0;
    printf("Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Number of Even elements in the array: %d\nNumber of Odd elements in the array: %d\n",even_count(arr,size),odd_count(arr,size));

    return 0;
}