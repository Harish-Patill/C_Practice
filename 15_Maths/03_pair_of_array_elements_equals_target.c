#include<stdio.h>

struct pairs{
    int a;
    int b;
};

int main(){
    int size=0;
    int found=0;
    int target=0;
    struct pairs num;

    printf("Size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter target: ");
    scanf("%d",&target);

    for(int i=0;i<size && !found;i++){
        for(int j=i+1;j<size;j++){
            if((arr[i] + arr[j]) == target){
                num.a=arr[i];
                num.b=arr[j];
                found=1;
                break;
            }
        }
    }
    found?printf("%d+%d=%d",num.a,num.b,target):printf("No element pair found.\n");
    

    return 0;
}