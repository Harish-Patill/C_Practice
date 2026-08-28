#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b){
    return (*(int *)a)-(*(int *)b);         // to sort in ascending order 
//  return (*(int *)b)-(*(int *)a);         // to sort in descending order  
    
}

int main(){
    int size=0;
    printf("Enter the array Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    qsort(arr,size,sizeof(arr[0]),compare);
    
    
    printf("Sorted the array elements: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}