#include<stdio.h>
int my_smallest(int arr[],int n){
	int smallest=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<smallest){
			smallest=arr[i];
		}
	}
	return smallest;
}

int main(){
	
	int size=0;
	printf("Enter Size: ");
	scanf("%d",&size);

	int arr[size];
	printf("Enter array elements: ");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	int smallest=my_smallest(arr,size);
	printf("The Smallest element from the array is %d\n",smallest);

	return 0;
}
