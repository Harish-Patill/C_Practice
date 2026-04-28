#include<stdio.h>

int main(){
    char string[50];
    printf("Enter your string here: ");
    scanf("%[^\n]", string);

    for(int i=0;string[i]!='\0';i++){
        int count=0;

        for(int j=0;string[j]!='\0';j++){
            if(string[i] == string[j]){
                count++;
            }
        }

        if(count == 1){
            printf("First non-repeating character is %c\n", string[i]);
            return 0;
        }
    }

    printf("No non-repeating character found\n");

    return 0;
}