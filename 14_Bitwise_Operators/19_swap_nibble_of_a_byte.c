// 1 nibble = 1byte (4 bites)

#include<stdio.h>
int main(){
    unsigned char ch=0xAB;

    int r1=ch<<4;
    int r2=ch>>4;

    printf("Combined: %hhx\n", r1 | r2);

    return 0;
}