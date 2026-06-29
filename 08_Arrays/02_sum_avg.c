#include<stdio.h>
int summ(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main (){
    int size=0;
    printf("Enter array size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int sum=summ(arr,size);

    printf("Sum of the array elements is %d, and the average is %d.",sum,sum/size);
    printf("\n");


}