#include<stdio.h>
int main(){
	int size1=0;
	int size2=0;
	int count=0;

	printf("Size1: ");
	scanf("%d",&size1);

	int arr1[size1];
	printf("Enter array1 elements: ");
	for(int i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
	}

	printf("Size2: ");
	scanf("%d",&size2);

	int arr2[size2];
	printf("Enter array2 elements: ");
	for(int i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}

	int arr[size1+size2];
	for(int i=0;i<size1;i++){
		arr[i]=arr1[i];
		count++;
	}

	for(int i=0;i<size2;i++){
		arr[count]=arr2[i];
		count++;
	}

	for(int i=0;i<size1+size2;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}


/*	anothe optimal way to add the secodn array elements--->

int arr[size1+size2];
for(int i=0;i<size1;i++){					//first array elements
	arr[i]=arr1[i];
}
for(int i=0;i<size2;i++){				//second array elements
	arr[i+size1]=arr2[i];
}



*/