#include<stdio.h>
int x_power_y(int b, int p){
    if(p == 0) return 1;            //will return 1 when p becomes 0;
    return x_power_y(b,p-1)*b;     //logic >> x^4 same as >> (x^3)*x... ans so on;
}
int main(){
    int base=0,power=0;
    printf("Enter base: ");
    scanf("%d",&base);

    printf("Enter power: ");
    scanf("%d",&power);

    int ans=x_power_y(base,power);
    printf("%d^%d is: %d\n",base,power,ans);

    return 0;
}

// sample output:

// Enter base: 2
// Enter power: 3
// 2^3 is: 8