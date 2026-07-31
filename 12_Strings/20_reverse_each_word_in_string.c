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


// #include<stdio.h>
// int main(){
//     char str[100];

//     printf("Enter the string: ");
//     scanf("%[^\n]",str);

//     int len=0;
//     while(str[len]!='\0'){
//         len++;
//     }
    
//     int start=0, end;
//     for(int i=0; i<=len; i++){
//         if(str[i]==' ' || str[i]=='\0'){
            
//             end=i-1;

//             while(start<end){
//                 char temp=str[start];
//                 str[start]=str[end];
//                 str[end]=temp;

//                 start++;
//                 end--;
//             }
//             start=i+1;
//         }
//     }
//     printf("Reverse words: %s\n",str);
// }


#include<stdio.h>
void reverseEach_word(char str[]){
    int start=0,end=0;

    while(1){
        if(str[end]==' ' || str[end]=='\0'){
            int left=start;
            int right=end-1;

            while(left<right){
                char temp=str[left];
                str[left]=str[right];
                str[right]=temp;

                left++;
                right--;
            }
            if(str[end]=='\0')
            break;

            start=end+1;
        }
        end++;
    }
}
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]",str);

    reverseEach_word(str);
    printf("%s",str);
}