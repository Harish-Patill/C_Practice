#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
    return (*(int*)a) - (*(int*)b);
}

int main(){
    int size=0;
    int nth_largest=0;
    int count=0;


    printf("Size: ");
    scanf("%d",&size);

    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the n value: ");
    scanf("%d",&nth_largest);
    
    int my_arr[size];
    for(int i=0;i<size;i++){
        my_arr[i]=arr[i];
    }

    qsort(my_arr,size,sizeof(int), compare);
    printf("The %d largest element in the array is: ",nth_largest);
    for(int i=size-1;i>=0;i--){
        count++;
        if(count == nth_largest){
            printf("%d\n",my_arr[i]);
            break;
        }
    }

    return 0;
}