#include <stdio.h>

int main(){
    int num=1020;
    int result=0, place=1, digit;

    while(num>0){
        digit=num%10;                           // get the last digit
        if(digit==0) digit=1;                   // check if the last digit is 0 or 1, if it is 0, replace it with 1;
        result=result+digit*place;              // now add this digit to a new variable(result) while maintaining the proper digit's place position(1,10,100..)
        place=place*10;                         // update the place every time to store the next digit
        num=num/10;                             // update the original num by removing the last digit.
    }

    printf("%d\n",result);
    return 0;
}