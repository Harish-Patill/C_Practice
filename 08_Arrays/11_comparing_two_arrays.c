#include<stdio.h>

int comparison(int arr1[],int size1,int arr2[]){
	int flag=0;

	for(int i=0;i<size1;i++){
		if(arr1[i] != arr2[i]){
			flag=1;
		}
	}
	return flag;
}

int main(){
	int size1=0;
	int size2=0;

	printf("Enter array 1 size: ");
	scanf("%d",&size1);
	int arr1[size1];
	
	printf("Enter array elemnts: ");
	for(int i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter array 2 size: ");
	scanf("%d",&size2);
	int arr2[size2];
	
	printf("Enter array elemnts: ");
	for(int i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}

	if(size1 != size2){
		printf("Both the array's are Not Equal\n");
		return 0;
	}
	if(comparison(arr1,size1,arr2)){
		printf("Both the array's are Not Equal\n");
		return 0;
	}
	printf("Both the array's are Equal\n");

	return 0;
}