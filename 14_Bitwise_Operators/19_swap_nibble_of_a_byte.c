// // 1 nibble = 1byte (4 bites)

// #include<stdio.h>
// int main(){
//     unsigned char ch=0xAB;

//     int r1=ch<<4;
//     int r2=ch>>4;

//     printf("Swapped: %hhx\n", r1 | r2);

//     return 0;
// }



#include <stdio.h>
int main() {
    unsigned char num;
    int n;

    printf("Enter a byte value (0-255): ");
    scanf("%d", &n);
    num = (unsigned char)n;

    unsigned char swapped = (num << 4) | (num >> 4);

    printf("Original: %d\n", num);
    printf("Swapped:  %d\n", swapped);

    return 0;
}