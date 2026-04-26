// Good morning       : 05 - 11     
// Good  afternoon    : 12 - 15
// Good evening       : 16 - 21
// Good night         : 22 - 4
// Invalid hour       : greater than 23

#include<stdio.h>
int main(){
    int num=0;
    printf("Enter Time: ");
    scanf("%d",&num);

    if(num>=5 && num<=11) printf("Good Mornin mate\n");
    else if(num>=12 && num<=15) printf("Good Afternoon\n");
    else if(num>=16 && num<=21) printf("Good Evening\n");
    else if((num>=22 && num<=23) || (num>=0 && num<=4)) printf("Good Night\n");
    else printf("Invalid hour\n");

    return 0;
}