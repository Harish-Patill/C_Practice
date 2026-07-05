#include<stdio.h>

void repeated_elements(int arr[],int size){
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i] == arr[j]){                                  // this will increment the count
                count++;
            }
        }
        if((count>1)){                                              // if the count is more than one, then it is repeated, so we need to print it
            int printed=0;

            for(int k=0;k<i;k++){                                   // will check if weve already printed the number
                if(arr[k] == arr[i]){
                    printed=1;
                    break;
                }
            }

            if(printed == 0){                                       // if not already printed, then will print it, else wont
                printf("%d ",arr[i]);
            }
        }
    }
}

int main(){
    int size=0;
    printf("Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    repeated_elements(arr,size);
    printf("\n");

    return 0;
}