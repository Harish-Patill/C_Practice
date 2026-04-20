#include<stdio.h>
int main (){
    int size=0,sum=0;
    printf("Enter array size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }

    printf("Sum of the array elements is %d, and the average is %d.",sum,sum/size);
    printf("\n");


}