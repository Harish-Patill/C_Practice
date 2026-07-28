#include<stdio.h>
int main(){
    int flag=0;
    int size=0;

    printf("Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size;i++){
        if(arr[i] > arr[i+1]){   // use size-1 in the for loop's 2nd parameter, else we will be checking our of bounds, (kept it as it is here for my own reasons)
            flag=1;
            break;
        }
    }

    if(flag){
        printf("Array is not sorted\n");
        return 0;
    }
    printf("Array is Sorted\n");
    
    return 0;
}