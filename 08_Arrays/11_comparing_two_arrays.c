#include<stdio.h>
int main(){
	int size1=0;
	int size2=0;
	int flag=0;

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
    
    if(size1 != size2){
        printf("NOT equal\n");
        return 0;
    }

    for(int i=0;i<size2;i++){
        if(arr1[i] != arr2[i]){
            flag=1;
            break;
        }
    }
	
    if(flag) printf("NOT EQUAL\n");
    else printf("EQUAL\n");

	return 0;
}
