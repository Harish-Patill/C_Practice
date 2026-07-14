#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]",str);

    char word[50];
    printf("Enter the word: ");
    scanf(" %[^\n]",word);

    char character;
    printf("Enter the replacement character: ");
    scanf(" %c",&character);

    int word_len=0;
    for(word_len=0;word[word_len] != '\0'; word_len++){}   

    char *word_ptr=strstr(str,word);
    int word_index=word_ptr-str;



    // option 1 form here ------
    int index = word_ptr - str;    // position where match starts
    
    char result[100];
    int k = 0;
    
    for(int i=0; i<index; i++){          // copy everything BEFORE the match
        result[k++] = str[i];
    }
    
    result[k++] = character;             // insert replacement char
    
    for(int i=index+word_len; str[i] != '\0'; i++){   // copy everything AFTER the match
        result[k++] = str[i];
    }
    
    result[k] = '\0';
    
    printf("Result: %s\n", result);
    // option 1 till here ------



    // option 2 from here ------
    // // shift everything after the matched word leftward, to overwrite the word.
    // int to_be_shifted = word_index + word_len;   // position exactly after the matched word ends, meaning the next word(which we need to bring back by left shifting!).
    // int i = word_index;
    
    // while(str[to_be_shifted] != '\0'){
        //     str[i] = str[to_be_shifted];
        //     i++;
        //     to_be_shifted++;
        // }
        // str[i] = '\0';   // close off the string after shifting
        
        // // now insert the replacement character at word_index
        // str[word_index] = character;
        
        // printf("The original string after the replacement: %s\n",str);
        
    // option 2 till here ------
    return 0;
}



/*
or we could use this method where we use another string to store the new modified string,
1-store the string as it is from the og into the new one until the sub-string
2-then store the insertion character
3-then continue to store the string characters as it is in the new string!
4-VOILA!!!



int index = word_ptr - str;    // position where match starts

char result[100];
int k = 0;

for(int i=0; i<index; i++){          // copy everything BEFORE the match
result[k++] = str[i];
}

result[k++] = character;             // insert replacement char

for(int i=index+word_len; str[i] != '\0'; i++){   // copy everything AFTER the match
result[k++] = str[i];
}

result[k] = '\0';
*/