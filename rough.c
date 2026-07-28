// Read two sorted arrays and print only the elements that are present in both arrays. Each common element should be printed only once.

// Input:
// arr1 = 1 2 2 3 5 7
// arr2 = 2 2 4 5 6 7

// Output:
// 2 5 7




#include <stdio.h>
void unique_elements(int arr1[],int size1,int arr2[],int size2){
    for(int i=0;i<size1;i++){
        int printed=0;
        for(int j=0;j<i;j++){
            if(arr1[i] == arr1[j]){
                printed=1;
                break;
            }
        }

        if(printed){
            continue;
        }

        for(int j=0;j<size2;j++){
            if(arr1[i] == arr2[j]){
                printf("%d ",arr1[i]);
                break;
            }
        }
    }
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

    unique_elements(arr1,size1,arr2,size2);
    printf("\n");

    return 0;
}