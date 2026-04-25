#include<stdio.h>
void function(int a){
    if(a == 0) return; 
    function(a-1);                          //first recrusion
    printf("%d\n",a);                       //when a reaches 1 function starts to come back by printing..
}
int main(){
    int num=0;
    printf("Enter number: ");
    scanf("%d",&num);

    function(num);
    
    return 0;
}

// sample output: 

// Enter number: 5
// 1
// 2
// 3
// 4
// 5