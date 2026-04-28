#include<stdio.h>
int main(){
	char str[50];
	printf("Enter a string: ");
	scanf("%[^\n]",str);

	for(int i=0;str[i]!='\0';i++){
		for(int j=0;str[j]!='\0';j++){
			if(str[i] == str[j]){
				printf("%c is the first repeated character\n",str[i]);
				return 0;
			}
		}
	}
	printf("There are no repeated charcters in %s\n",str);

	return 0;
}
