#include<stdio.h>

char last(char *ptr){
    char ans = '\0';

    for(int i = 0; ptr[i] != '\0'; i++){
        for(int j = i + 1; ptr[j] != '\0'; j++){
            if(ptr[i] == ptr[j]){
                ans = ptr[i];
            }
        }
    }
    return ans;
}

int main(){
    char word[50];
    printf("Enter the string: ");
    scanf("%[^\n]", word);
    
    char ans = last(word);

    if(ans != '\0')
        printf("%c is the last repeating character\n", ans);
    else
        printf("No repeating character found\n");

    return 0;
}