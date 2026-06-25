#include<stdio.h>
void remove_multiple_spaces(char *str){
    int i=0;
    int j=0;

    while(str[i] != '\0'){
        str[j]=str[i];
        if(str[i] == ' '){
            while(str[i] == ' '){
                i++;
            }
        }
        else{
            i++;
        }
        j++;
    }
    str[j]='\0';
}

int main(){
    int len=0;
    char str[50];

    printf("Enter your String:\n");
    scanf("%[^\n]",str);

    remove_multiple_spaces(str);

    for(int i=0;str[i] != '\0';i++){
        printf("%c",str[i]);
    }
    printf("\n");

    return 0;
}