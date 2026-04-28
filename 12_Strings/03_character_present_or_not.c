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
			flag=1;
			break; 
		} 
		else {
			flag=0;
			break;
		}
	}
	
	if(flag) {
		printf("Letter is present in the word\n");
	}
	else{
		printf("Letter is not present in the word\n");
	}	 

	return 0;
}
