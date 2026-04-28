#include<stdio.h>
int main(){
    char word[50];
    printf("Enter your string here: ");
    scanf("%[^\n]",word);

    int len=0;
    for(len=0;word[len]!=0;len++){}

    int count=0;
    for(int i=0;i<len;i++){
        if((word[i]>='A' && word[i]<='Z') || 
           (word[i]>='a' && word[i]<='z' )||
           (word[i]>='0' && word[i]<='9')){
            continue;
        }
        else count++;
    }

    printf("Total number of special characters in %s are %d\n",word,count);

    return 0;
}