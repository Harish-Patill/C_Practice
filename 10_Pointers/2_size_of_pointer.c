// Print the size of pointers to int, char, float, double.

#include<stdio.h>
int main(){

    printf("Size of int pointer   : %zu\n", sizeof(int *));
    printf("Size of char pointer  : %zu\n", sizeof(char *));
    printf("Size of float pointer : %zu\n", sizeof(float *));
    printf("Size of double pointer: %zu\n", sizeof(double *));

    // int inum=5;
    // char cnum='A';
    // float fnum=5.5;
    // double dnum=5.555555;

    // int *pinum=&inum;
    // char *pcnum=&cnum;
    // float *pfnum=&fnum;
    // double *pdnum=&dnum;

    // printf("Size of int   : %zu\n",sizeof(pinum));
    // printf("Size of char  : %zu\n",sizeof(pcnum));
    // printf("Size of float : %zu\n",sizeof(pfnum));
    // printf("Size of double: %zu\n",sizeof(pdnum));

    return 0;
}