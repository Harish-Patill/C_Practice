#include<stdio.h>
int main(){
	int size1=0;
	int size2=0;

	printf("Array 1 size: ");
	scanf("%d",&size1);

	int arr1[size1];
	printf("Enter array elemnts: ");
	for(int i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("Array 2 size: ");
	scanf("%d",&size2);
	
	int arr2[size2];
	printf("Enter array elemnts: ");
	for(int i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}

	int arr[size1+size2];
	for(int i=0;i<size1;i++){					//first array elements
		arr[i]=arr1[i];
	}
	for(int i=0;i<size2;i++){				//second array elements
		arr[i+size1]=arr2[i];
	}

	printf("The final array elements are: ");
	for(int i=0;i<size1+size2;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}