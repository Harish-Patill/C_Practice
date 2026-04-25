#include<stdio.h>
void reversing(int arr[],int s,int e){
    if(s<e){                                 //if s becomes greater than e, and we further sort, then we will be undoing the reversing..;
        int temp=arr[s];                    //does the reversing
        arr[s]=arr[e];                     //does the reversing
        arr[e]=temp;                      //does the reversing
        reversing(arr,s+1,e-1);          //recrusion by sending the base array location and increasing the start point and decreasing the end point;  
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
    
    reversing(arr,0,size-1);
    
    printf("Printing after reversing array elements: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}