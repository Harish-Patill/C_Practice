#include<stdio.h>
int main(){
    float fah,cel;
    printf("Enter the temp in Fahrenheit: ");
    scanf("%f",&fah);
    
    cel=(fah-32)*5/9 ;
    
    printf("The temp in Celcius is: %g\n",cel);

    return 0;
}