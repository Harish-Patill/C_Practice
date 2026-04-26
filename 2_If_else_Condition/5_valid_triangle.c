// Check if a triangle is valid given three sides.

#include<stdio.h>
int main(){
    int s1,s2,s3;

    printf("Enter side1, side2, side3 length: ");
    scanf("%d %d %d",&s1,&s2,&s3);

    if((s1+s2>s3) && (s2+s3>s1) && (s3+s1>s2)) printf("Triangle is valid\n");
    else printf("Triangle is NOT valid\n");

}