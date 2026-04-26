#include<stdio.h>
int main(){
    int size=0;
    printf("Enter array size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int flag=0;
    for(int i=0;i<size/2;i++){
        if(arr[i] != arr[size-1-i]){
            flag=1;
            break;
        }
    }

    if(flag == 1) printf("Array is NOT Palindrome\n");
    else printf("Array IS Palindrome\n");
}