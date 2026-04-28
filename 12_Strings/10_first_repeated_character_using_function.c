#include<stdio.h>

void first(char *ptr){
    for(int i = 0; ptr[i] != '\0'; i++){
        for(int j = i + 1; ptr[j] != '\0'; j++){
            if(ptr[i] == ptr[j]){
                printf("%c is the first repeating character\n", ptr[i]);
                return;
            }
        }
    }
    printf("No repeating character found\n");
}

int main(){
    char word[50];
    printf("Enter the word: ");
    scanf("%[^\n]", word);

    first(word);

    return 0;
}