#include<stdio.h>

int equilibrium_index(int arr[], int size){
    int total_sum = 0;
    for(int i=0;i<size;i++){
        total_sum=total_sum + arr[i];
    }

    int left_sum = 0;
    for(int i=0;i<size;i++){
        int right_sum=total_sum - left_sum - arr[i];

        if(left_sum == right_sum){
            return i;
        }

        left_sum=left_sum + arr[i];
    }

    return -1;  // no equilibrium index found
}

int main(){
    int size = 0;
    printf("Size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("The Equilibrium index of array is %d\n", equilibrium_index(arr, size));

    return 0;
}