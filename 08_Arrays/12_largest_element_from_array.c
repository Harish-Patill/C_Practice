#include<stdio.h>
int my_largest(int arr[], int n){
    int largest=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    return largest;
}

int main(){
    int size=0;
    printf("Enter array size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int largest=my_largest(arr,size);

    printf("The Largest Element from the array is %d\n",largest);
    
    return 0;
}
