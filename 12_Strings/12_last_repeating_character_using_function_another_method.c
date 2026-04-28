#include<stdio.h>
int main(){
    char string[50];
    printf("Enter your string: ");
    scanf("%[^\n]",string);

    int i=0;
    for(i=0;string[i]!='\0';i++){}

    for(int j=i-1;j>=0;j--){
        for(int k=j-1;k>=0;k--){
            if(string[j]==string[k]){
                printf("Last repeating character is %c\n",string[j]);
                return 0;
            }
        }
    }
    printf("There are no repeating elements\n");
    
    return 0;
}