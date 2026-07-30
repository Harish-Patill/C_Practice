#include <stdio.h>

void toBinary(int n) {
    char binary[32];
    int i=0;

    if(n == 0){
        printf("0");
        return;
    }

    while(n>0){
        binary[i]=(n%2)+'0';
        n=n/2;
        i++;
    }

    for(int j=i-1;j>=0;j--){
        printf("%c", binary[j]);
    }
}

int main() {
    int n;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("Binary: ");
    toBinary(n);
    printf("\n");

    printf("Octal: %o\n", n);
    printf("Hexadecimal: %X\n", n);

    return 0;
}