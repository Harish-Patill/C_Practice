#include<stdio.h>
int main(){
	char name[50];

	printf("Enter your name: ");	
	scanf("%s",name);

	int i=0;
	for(i=0;name[i] != '\0';i++){
		//hehe;
	}

	printf("The length of the string %s is %d\n",name,i);

	return 0;
}
