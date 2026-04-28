#include<stdio.h>
int count_occ(char *ptr,char ch){
    int i=0;
    int count=0;
    while(ptr[i]!=0){
        if(ptr[i]==ch){
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    char word[50];
    printf("Enter the word: ");
    scanf("%[^\n]",word);

    char ch;
    printf("Enter your letter: ");
    scanf(" %c",&ch);

    int ans=count_occ(word,ch);
    if(ans>0)    printf("%c is present in %s %d times\n",ch,word,ans);
    else  printf("%c is not present in %s \n",ch,word);

    return 0;
}