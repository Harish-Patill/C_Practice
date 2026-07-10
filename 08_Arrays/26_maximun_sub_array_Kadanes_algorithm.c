#include<stdio.h>

int max_subArray(int arr[],int size,int *start_original,int *end_original){
    int current_sum=arr[0];
    int max_sum=arr[0];
    int start=0;

    *start_original=0;
    *end_original=0;

    for(int i=1;i<size;i++){
        if(current_sum<0){
            current_sum=arr[i];
            start=i;
        }
        else{
            current_sum=current_sum+arr[i];
        }

        if(current_sum>max_sum){
            max_sum=current_sum;

            *start_original=start;
            *end_original=i;
        }
    }

    return max_sum;
}

int main(){

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start, end;

    printf("The maximum sub array is   = %d\n",max_subArray(arr,size,&start,&end));
    printf("The sub array elements are = ");
    for(int i=start;i<=end;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}

// The maximum sub array is   = 6
// The sub array elements are = 4 -1 2 1 