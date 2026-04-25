#include<stdio.h>
void printing(int arr[],int n){
    if(n>0){
        printing(arr,n-1);                      //function recrusion
        printf("%d ",arr[n-1]);                //printing after recrusion so that it prints from the last iteration which has the first element!
    }
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
    
    printf("Printing array elements using the recrusion: ");
    printing(arr,size);
    printf("\n");

    return 0;
}