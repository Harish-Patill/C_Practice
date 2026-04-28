#include<stdio.h>
int main(){
	char name[50];
	printf("Enter your word here: ");
	scanf("%[^\n]",name);
	
	int sum=0;
	int len=0;
	for(len=0;name[len]!='\0';len++){
		if(name[len]>=48 && name[len]<=57){
			continue;
		}
		sum=sum+name[len];		

	}
	printf("The weight of the string %s is %d\n",name,sum);

	return 0;
}
