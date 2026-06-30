#include<stdio.h>
void repeated_elements(int arr[],int size){
    
    
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        
        if(count>1){
            int printed=0;
            
            for(int k=0;k<i;k++){
                if(arr[k] == arr[i]){
                    printed=1;
                    break;
                }
            }
                
            if(printed == 0){
                printf("%d ",arr[i]);
            }
        }
    }
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

    repeated_elements(arr,size);

    return 0;
}