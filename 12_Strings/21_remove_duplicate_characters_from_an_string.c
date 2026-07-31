#include<stdio.h>
int main(){
    char string[50];
    char backup[50];
    printf("Enter the string: ");
    scanf("%[^\n]",string);

    int new=0;
    int len=0;
    for(len=0;string[len] != '\0';len++){}

    for(int i=0;i<len;i++){
        int seen_before=0;
        for(int j=0;j<i;j++){
            if(string[i] == string[j] ){
                seen_before=1;
                break;
            }
        }
        if(seen_before == 0){                                   // first time we are seeing this char
            backup[new]=string[i];
            new++;
        }
    }

    backup[new]='\0';                                           // will add null terminator at the end of the backup string

    for(int i=0;i<=new;i++){                                    // we use the <= to also copy the null to the og string.
        string[i]=backup[i];
    }

    printf("String after removing duplicates: %s\n",string);    

    return 0;
}