#include <stdio.h>

int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int index=0, count=0;

    while(index<size){
        index=index+arr[index];
        count++;
    }

    printf("Count = %d\n",count);

    return 0;
}