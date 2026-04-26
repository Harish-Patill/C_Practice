// Check if a year is a leap year.

#include<stdio.h>
int main(){
    int year=0;
    printf("Enter the year: ");
    scanf("%d",&year);

    if((year%4==0 && year%100 !=0) || (year%400==0)) printf("%d is a LEAP year\n",year);
    else printf("%d is NOT A LEAP year\n",year);

}