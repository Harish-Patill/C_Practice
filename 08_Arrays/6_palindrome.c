#include<stdio.h>
int logic(int arr[], int size){
    int flag=0;

    for(int i=0;i<size/2;i++){
        if(arr[i] != arr[size-1-i]){            //check the values till half for the array;
            flag=1;
            break;
        }
    }
    
    return flag;                                //return the flag value;
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

    int flag=logic(arr,size);

    if(flag == 1) printf("Array is NOT Palindrome\n");
    else printf("Array IS Palindrome\n");
}