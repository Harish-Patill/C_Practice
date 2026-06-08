#include<stdio.h>
int main(){
	int size1=0;
	int size2=0;
	
	printf("Enter array_1 size: ");
	scanf("%d",&size1);
	
	int arr1[size1];
	printf("Enter array_1 elements: ");
	for(int i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter array_2 size: ");
	scanf("%d",&size2);
	
	int arr2[size2];
	printf("Enter array_2 elements: ");
	for(int i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}
	
	int count=0;
	int new_size=size1+size2;
	int new_array[new_size];
	for(int i=0;i<size1;i++){
		new_array[i]=arr1[i];
		count++;
	}
	for(int i=0;i<size2;i++){
		new_array[i+count]=arr2[i];
	}
	
	printf("New Array elements are: ");
	for(int i=0;i<new_size;i++){
		printf("%d ",new_array[i]);
	}
	

	return 0;
}
