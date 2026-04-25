#include<stdio.h>
void function(int a){
    if(a == 0) return; 
    printf("%d\n",a);                       //first printing the value;
    function(a-1);                          //then go on decrementing the value until it is 0;
}
int main(){
    int num=0;
    printf("Enter number: ");
    scanf("%d",&num);

    function(num);
    
    return 0;
}

// sample output :

// Enter number: 5
// 5
// 4
// 3
// 2
// 1