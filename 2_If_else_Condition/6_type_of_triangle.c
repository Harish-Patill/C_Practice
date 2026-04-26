// Determine the type of triangle: equilateral, isosceles, or scalene.

#include<stdio.h>
int main(){
    int s1=0,s2=0,s3=0;

    printf("Enter side1, side2, side3: ");
    scanf("%d %d %d",&s1,&s2,&s3);

    if((s1+s2>s3) && (s2+s3>s1) && (s3+s1>s2)){
        if(s1==s2 && s2==s3) printf("Equilateral triangle\n");
        else if((s1==s2) || (s2==s3) || (s3==s1)) printf("Isosceles triangle\n");
        else printf("Scalene triangle\n");
    }
    else printf("NOT a valid triangle\n");

    return 0;
}