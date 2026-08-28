// Bull= same digit in both strings at same position (Right place)
// Cow = same digit in the other string, just at different position (Wrong place)

    // S1 = 1234
    // S2 = 1432

    // Bulls = 2
    // Cows  = 2


#include<stdio.h>
#include<string.h>
void cowbull(char s1[], char s2[]){
    int cow=0, bull=0;
    int string_len=strlen(s1);

    for(int i=0; i<string_len; i++){
        if(s1[i]==s2[i])
        bull++;
        else if(strchr(s2,s1[i]))
        cow++;
    }
    printf("Cow=%d\n",cow);
    printf("Bull=%d\n",bull);
}

int main(){
    char s1[100], s2[100];

    printf("Enter  first string: ");
    scanf(" %[^\n]",s1);

    printf("Enter second string: ");
    scanf(" %[^\n]",s2);

    if(strlen(s1)!=strlen(s2)){
        printf("Error");
        return 0;
    }

    cowbull(s1,s2);

    return 0;
}
