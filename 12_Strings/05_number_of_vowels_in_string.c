#include<stdio.h>
int main(){
	char name[50];
	
	printf("Enter your word here: ");
	scanf("%s",name);
	
	int len=0;
	int count=0;	
	for(len=0;name[len]!='\0';len++){		//finding the length
		if(name[len] == 'a'||name[len] == 'e'||name[len] == 'i'||name[len] == 'o'||name[len] == 'u'||
		   name[len] == 'A'||name[len] == 'E'||name[len] == 'I'||name[len] == 'O'||name[len] == 'U'){
			count++;
		}
	}
	
	printf("The total number of volwels in %s is %d\n",name,count);
	return 0;
}

