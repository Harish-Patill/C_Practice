#include<stdio.h>

struct year{
    int day;
    int month;
    int year;
};

int main(){
    struct year d1,d2;
    int difference;

    printf("Enter first date: ");
    scanf("%d %d %d",&d1.day,&d1.month,&d1.year);

    printf("Enter second date: ");
    scanf("%d %d %d",&d2.day,&d2.month,&d2.year);

    difference=(d2.year)-(d1.year);

    if((d2.month < d1.month) || ((d2.month == d1.month) && (d2.day < d1.day))){
        difference--;
    }

    printf("Difference between %d/%d/%d and %d/%d/%d is: %d years\n",d1.day,d1.month,d1.year,d2.day,d2.month,d2.year,difference);

    return 0;
}