#include<stdio.h>

int sum(int arr[],int size){
    int sum=0;

    for(int i=0;i<size;i++){
        sum+=arr[i];
    }

    return sum;
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

    printf("The Sum of the array elements: %d\n",sum(arr,size));
    printf("The Avg of the array elements: %g\n",sum(arr,size)/(float)size);

    return 0;
}