/*  Qustion
WAP to reverse each word in a string.
    Example:
    Input: "Hello how are you"
    Output: "olleH woh era uoy"
*/


#include<stdio.h>
void reverse_string(char *string){
    int len=0;
    for(len=0;string[len] != '\0';len++){}

    char temp;
    for(int i=0;i<len/2;i++){
        temp=string[i];
        string[i]=string[len-i-1];
        string[len-i-1]=temp;
    }
}
int main(){
    char string[50];

    printf("  Enter the String: ");
    scanf("%[^\n]",string);
    
    reverse_string(string);
    
    printf("The Reverse String: ");
    for(int i=0;string[i] != '\0';i++){
        printf("%c",string[i]);
    }
    printf("\n");
}