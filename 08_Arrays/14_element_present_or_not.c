#include<stdio.h>
int element_check(int arr[],int n,int element){
    int flag=0;

    for(int i=0;i<n;i++){
        if(arr[i]==element){
            flag=1;
            break;
        }
    }
    return flag;
}

int main(){
    int size=0;
    int element;

    printf("Enter size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Enter Element you want to check: ");
    scanf("%d",&element);


    
    int flag=element_check(arr,size,element);

    if(flag) printf("ELEMENT is Present\n");
    else printf("ELEMENT is NOT Present\n");

    return 0;
}