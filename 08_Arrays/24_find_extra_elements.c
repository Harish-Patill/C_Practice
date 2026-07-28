#include<stdio.h>

void array_extra_elements(int arr_1[],int size_1,int arr_2[],int size_2){

    for(int i=0;i<size_1;i++){                  // will print extra elements found, when compared to array 2

        // will print only one time
        
        int printed=0;                          // start
        for(int k=0;k<i;k++){
            if(arr_1[i] == arr_1[k]){
                printed=1;
                break;
            }
        }

        if(printed){
            continue;
        }                                       // end

        int flag=1;
        for(int j=0;j<size_2;j++){
            if(arr_1[i] == arr_2[j]){
                flag=0;
                break;
            }
        }

        if(flag){
            printf("%d ",arr_1[i]);
        }
    }

    for(int i=0;i<size_2;i++){                  // will print extra elements found, when compared to array 1

        int printed=0;
        for(int k=0;k<i;k++){
            if(arr_2[i] == arr_2[k]){
                printed=1;
                break;
            }
        }

        if(printed){
            continue;
        }

        int flag=1;
        for(int j=0;j<size_1;j++){
            if(arr_2[i] == arr_1[j]){
                flag=0;
                break;
            }
        }

        if(flag){
            printf("%d ",arr_2[i]);
        }
    }
}

int main(){
    int size_1=0;
    int size_2=0;

    printf("Size 1: ");
    scanf("%d",&size_1);

    int arr_1[size_1];
    printf("Enter array elements: ");
    for(int i=0;i<size_1;i++){
        scanf("%d",&arr_1[i]);
    }

    printf("Size 2: ");
    scanf("%d",&size_2);

    int arr_2[size_2];
    printf("Enter array elements: ");
    for(int i=0;i<size_2;i++){
        scanf("%d",&arr_2[i]);
    }

    printf("Extra unique elements: ");
    array_extra_elements(arr_1,size_1,arr_2,size_2);
    printf("\n");

    return 0;
}


// Size 1: 5
// Enter array elements: 1 2 3 4 5
// Size 2: 4
// Enter array elements: 1 2 3 4
// 5 