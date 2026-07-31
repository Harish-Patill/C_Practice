//WAP to calculate the number of occurance of a character

#include<stdio.h>
int main(){
	char name[50];
	char ch;
	printf("Enter your word here: ");
	scanf("%s",name);
	
	printf("Enter your letter here: ");
	scanf(" %c",&ch);

	int len=0;
	for(len=0;name[len]!='\0';len++){}		//finding the length
	
	int flag=0;	
	for(int i=0;i<len;i++){
		if(name[i]==ch){
			flag++;
		}
	}
	
	if(flag == 1){
		printf("The occurance of %c in %s is %d time\n",ch,name,flag);
	}
	else{
		printf("The occurance of %c in %s is %d times\n",ch,name,flag);
	}
	return 0;
}