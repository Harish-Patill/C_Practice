#include<stdio.h>
int main(){
    char word[50];
    printf("Enter your string here: ");
    scanf("%[^\n]",word);

    int len=0;
    for(len=0;word[len]!=0;len++){}

    int first=0;
    int last=len;

    int flag=0;
    while(first<last){
        if(word[first] != word[last-1]){
            flag=1;
        }
        first++;
        last--;
    }

    if(flag==1) printf("Not a Palindrome\n");
    else printf("Is an Palindrome\n");

    return 0;
}