#include<stdio.h>
int main(){
	char name[50];
	printf("Enter your name: ");
	scanf("%s",name);

	printf("Your name is %s\n",name);

	//revesing here;
	int i=0;				//finding the len
	for(i=0;name[i] != '\0';i++){}
	
	for(int j=0;j<i/2;j++){
		int temp=name[j];
		name[j]=name[i-j-1];
		name[i-j-1]=temp;
	}
	
	printf("Your name after reversing is %s\n",name);
	return 0;
}
