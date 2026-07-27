#include<stdio.h>

int is_palindrome(int arr[],int size){
    int flag=0;

    for(int i=0;i<size;i++){
        if(arr[i] != arr[size-i-1]){
            flag=1;
            break;
        }
    }

    return flag;
}

int main(){
    int size=0;
    printf("Enter size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    if(is_palindrome(arr,size)){
        printf("The array is NOT Palindrome\n");
        return 0;
    }
    printf("The array IS Palindrome\n");
    
    return 0;
}