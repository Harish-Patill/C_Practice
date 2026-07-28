#include<stdio.h>
int main(){
    int size=0;
    printf("Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<size-1;k++){
                    arr[k]=arr[k+1];                        // will rewrite a with a+1 element;
                }
                size--;
                j--;                                        // to overcome a index getting skipped

            }
        }
    }
    
    printf("The array elements are: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}



// #include <stdio.h>

// int removeDuplicates(int arr[], int n) {
//     int write_index = 0;   // where next unique element goes

//     for (int i = 0; i < n; i++) {
//         int is_duplicate = 0;

//         // check if arr[i] already exists in arr[0..write_index-1]
//         for (int j = 0; j < write_index; j++) {
//             if (arr[j] == arr[i]) {
//                 is_duplicate = 1;
//                 break;
//             }
//         }

//         if (!is_duplicate) {
//             arr[write_index] = arr[i];
//             write_index++;
//         }
//     }

//     return write_index;   // this is the new "length"
// }

// int main() {
//     int arr[] = {4, 2, 4, 1, 2, 3, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int new_len = removeDuplicates(arr, n);

//     printf("Unique elements: ");
//     for (int i = 0; i < new_len; i++)
//         printf("%d ", arr[i]);
//     printf("\n");

//     return 0;
// }