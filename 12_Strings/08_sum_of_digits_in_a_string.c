#include<stdio.h>
int main(){
	char word[50];
	printf("Enter your word here: ");
	scanf("%[^\n]",word);
	
	int sum=0;
	int i=0;
	for(i=0;word[i]!='\0';i++){
		if(word[i]>='0' && word[i]<='9'){
			sum=sum+(word[i]-'0');
		}
	}
	printf("Sum of all the digits in the given string is %d\n",sum);

	return 0;
}
