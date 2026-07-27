// #include<stdio.h>
// int main(){
//     int size1=0;
//     int size2=0;
    
//     printf("Size: ");
//     scanf("%d",&size1);

//     int arr1[size1];
//     printf("Enter array elements: ");
//     for(int i=0;i<size1;i++){
//         scanf("%d",&arr1[i]);
//     }

//     printf("Size: ");
//     scanf("%d",&size2);

//     int arr2[size2];
//     printf("Enter array elements: ");
//     for(int i=0;i<size2;i++){
//         scanf("%d",&arr2[i]);
//     }

//     printf("Common elements from both the arrays: ");
//     for(int i=0;i<size1;i++){
//         for(int j=0;j<size2;j++){
//             if(arr1[i] == arr2[j]){
//                 printf("%d ",arr1[i]);
//             }
//         }
//     }
//     printf("\n");

//     return 0;
// }


#include <stdio.h>

int main()
{
    int size1, size2;

    printf("Size1: ");
    scanf("%d", &size1);

    int arr1[size1];
    printf("Enter array1 elements: ");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Size2: ");
    scanf("%d", &size2);

    int arr2[size2];
    printf("Enter array2 elements: ");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("Unique common elements: ");

    for (int i = 0; i < size1; i++)
    {
        int already_printed = 0;

        // Check if arr1[i] has already appeared
        for (int k = 0; k < i; k++)
        {
            if (arr1[k] == arr1[i])
            {
                already_printed = 1;
                break;
            }
        }

        if (already_printed)
            continue;

        // Check if arr1[i] exists in arr2
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    printf("\n");

    return 0;
}