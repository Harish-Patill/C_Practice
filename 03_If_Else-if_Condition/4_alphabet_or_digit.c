#include<stdio.h>
int main(){
    
    char character;
    
    printf("Enter the character: ");
    scanf("%c",&character);
    
    if(character>= 'A' && character<= 'Z'){
        printf("The character is Upper Case.\n");
    }   
    else if(character>= 'a' && character<= 'z'){
        printf("The character is Lower Case.\n");
    }   
    else if(character>= 48 && character<= 57){
        printf("The character is Digit.\n");
    }   
    else{
        printf("Not an alphabet or a digit.\n");
    }   

    return 0;
}