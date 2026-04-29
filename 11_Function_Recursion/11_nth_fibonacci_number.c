#include<stdio.h>
int fibo(int num){
    if(num == 1 || num == 2) return 1;                      //note: we are starting the series as 1 1 2..and so on
    return fibo(num-1)+fibo(num-2);                        //fibonacci of 4th element is fibonacci_of(3)+fibonacci_of(2) >> basically the last two elemebts..
}

int main(){
    int num=0;
    printf("Enter nth number: ");
    scanf("%d",&num);

    printf("%d fibonacci number is : %d\n",num,fibo(num));  //can call a function and print this way, reduces a line..

    return 0;
}

// sample output:

// Enter nth number: 4
// 4th fibonacci number is : 3