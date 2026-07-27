#include<stdio.h>

void read(int arr[],int size){
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}


void write(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int size=0;

    printf("Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    read(arr,size);

    printf("The array elements: ");
    write(arr,size);

    printf("\n");

    return 0;
}


// int main(){
//     int size=0;

//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     printf("Enter array elements: ");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
    
//     printf("The array elements are: ");
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");

//     return 0;
// }