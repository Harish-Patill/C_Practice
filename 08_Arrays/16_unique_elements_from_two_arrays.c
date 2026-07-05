#include<stdio.h>
int main(){
    int size1=0;
    int size2=0;
    
    printf("Size for 1st array: ");
    scanf("%d",&size1);
    
    int arr1[size1];
    printf("Enter array elements: ");
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }
    
    printf("Size for 2nd array: ");
    scanf("%d",&size2);
    
    int arr2[size2];
    printf("Enter array elements: ");
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }
    
    printf("Unique elements from both the arrays: ");
    for(int i=0;i<size1;i++){                                                      // this prints unique elements from the array 1
        int flag=0;
        for(int j=0;j<size2;j++){
            if(arr1[i] == arr2[j]){
                flag=1;
                break;
            }
        }
        if(flag == 0){
            printf("%d ",arr1[i]);
        }
    }

    for(int i=0;i<size2;i++){                                                     // this prints unique elements from the array 2
        int flag=0;
        for(int j=0;j<size1;j++){
            if(arr2[i] == arr1[j]){
                flag=1;
                break;
            }
        }
        if(flag == 0){
            printf("%d ",arr2[i]);
        }
    }
    printf("\n");

    return 0;
}