#include<stdio.h>
int my_odd(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2 != 0){
            ans++;
        }
    }
    return ans;
}

int my_even(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2 == 0){
            ans++;
        }
    }
    return ans;
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

    int odd=my_odd(arr, size);
    int even=my_even(arr,size);
    printf("The total number of odd elements from the array: %d\nThe total number of even elements from the array: %d\n",odd,even);

	return 0;
}
