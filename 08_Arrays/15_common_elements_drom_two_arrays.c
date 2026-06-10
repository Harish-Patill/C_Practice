#include<stdio.h>
void compare(int arr1[],int arr2[],int s1,int s2){
    for(int i=0;i<s1;i++){
        for(int j=0;j<s2;j++){
            if(arr1[i]==arr2[j]){
                printf("%d ",arr2[j]);
            }
        }
    }
}

int main(){
    int size1=0;
    int size2=0;

    printf("Enter array 1 size: ");
    scanf("%d",&size1);

    int arr1[size1];
    printf("Enter array 1 elements: ");
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter array 2 size: ");
    scanf("%d",&size2);

    int arr2[size2];
    printf("Enter array 2 elements: ");
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }

    compare(arr1,arr2,size1,size2);

    return 0;
}