/*  Qustion
WAP to reverse each word in a string.
    Example:
    Input: "Hello how are you"
    Output: "olleH woh era uoy"
*/


#include<stdio.h>
void reverse_string(char *string){
    char temp;
    int string_len=0;
    int start=0;
    int end=0;

    for(string_len=0;string[string_len] != '\0'; string_len++){}

    for (int i=0;i<=string_len;i++) {
        if (string[i] == ' ' || string[i] == '\0') {
            int end = i;

            for(int i=start;i<start+(end-start)/2;i++){
                temp=string[i];
                string[i]=string[end - 1 - (i - start)];
                string[end - 1 - (i - start)]=temp;
            }
            start = i + 1;
        }
    }

}
int main(){
    char string[100];

    printf("  Enter the String: ");
    scanf("%[^\n]",string);
    
    reverse_string(string);
    
    printf("The Reverse String: ");
    for(int i=0;string[i] != '\0';i++){
        printf("%c",string[i]);
    }
    printf("\n");
}