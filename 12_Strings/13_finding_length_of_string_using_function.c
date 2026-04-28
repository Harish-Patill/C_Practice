#include<stdio.h>
int function(char *ptr){
    int i=0;
    int count=0;

    while(ptr[i] != 0){
        i++;
        count++;
    }
    return count;
}

int main(){
    char name[50];
    printf("Enter here: ");
    scanf("%[^\n]",name);

    int ans=function(name);
    printf("The size of the %s is %d\n",name,ans);

    return 0;
}