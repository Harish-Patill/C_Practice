// 1.Write a C program to find the smallest missing positive integer from an unsorted array.

// The array may contain:

// Positive numbers
// Negative numbers
// Zero
// Duplicate values

// Your task is to find the smallest positive integer (greater than 0) that is not present in the array.


#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b){
    return (*(int*)a) - (*(int*)b);
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
    
    qsort(arr, size, sizeof(int), compare);
    int expected = 1;
    
    for (int i=0;i<size;i++){
        if (arr[i]<=0)
        continue;          // Ignore negatives and 0
        
        if(arr[i]==expected){
            expected++;        
        }                   // Found the expected number 
                            // Duplicates are automatically ignored because
                            // if arr[i] < expected, nothing happens.
    }
    
    printf("Smallest missing positive integer = %d\n", expected);
    
    return 0;
}



// Input
// 5
// -3 -2 -1 -5 -4
// Output
// 1

// Input
// 8
// 2 3 7 6 8 -1 -10 15
// Output
// 1