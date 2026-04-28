#include<stdio.h>
int main(){
	char name[50];
	int upper=0;
	int lower=0;
	int digit=0;
		
	printf("Enter your word here: ");
	scanf("%[^\n]",name);
	
	int len=0;
	int count=0;	
	for(len=0;name[len]!='\0';len++){		//finding the length
		if(name[len]>=48 && name[len]<=57) digit++;
		else if(name[len]>=97 && name[len]<=122) lower++;
		else if(name[len]>=65 && name[len]<=90) upper++;
	}
	
	printf("Upper: %d\nLower: %d\nDigit: %d\n",upper,lower,digit);
}


