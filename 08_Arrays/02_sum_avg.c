#include<stdio.h>
int arry_sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int size=0;
    printf("Enter the array size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("The sum of the array elements: %d\n",arry_sum(arr,size));
    printf("The avg of the array elements: %.2g\n",(arry_sum(arr,size))/(float)size);

    return 0;
}