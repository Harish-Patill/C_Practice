#include<stdio.h>
int main(){
    char name[20];
    printf("Enter your name: ");
    scanf(" %s",name);

    printf("Hey there %s, hope you are doing well!!\n",name);
    
    return 0;
}