#include<stdio.h>
#include<stdlib.h>

int remove_duplicates(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i] == arr[j]){
                for(int k=j;k<size-1;k++){
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    return size;
}

int compare(const void *x, const void *y){
    return (*(int*)x) - (*(int*)y);
}

int main(){
    int size1=0,size2=0;

    printf("Enter array 1 size: ");
    scanf("%d",&size1);

    int arr1[size1];
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter array 2 size: ");
    scanf("%d",&size2);

    int arr2[size2];
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }

    int count=0;
    int arr3[size1+size2];
    for(int i=0;i<size1;i++){
        arr3[i]=arr1[i];
        count++;
    }
    for(int i=0;i<size2;i++){
        arr3[count]=arr2[i];
        count++;
    }

    int new_size=remove_duplicates(arr3,size1+size2);
    qsort(arr3,new_size,sizeof(int), compare);
    printf("Array 3: ");
    for(int i=0;i<new_size;i++){
        printf("%d ",arr3[i]);
    }

    return 0;
}