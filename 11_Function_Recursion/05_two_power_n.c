#include<stdio.h>
int power_function(int a){
    if(a == 0) return 1;                    //will return 1 when a becomes 0;
    return power_function(a-1)*2;          //logic >> 2^3 is >> 2*(2^2)... and so on..;
}
int main(){
    int power=0;
    printf("Enter the power: ");
    scanf("%d",&power);

    int ans=power_function(power);
    printf("2 power %d is %d\n",power,ans);

    return 0;
}

// sample output:

// Enter the power: 3
// 2 power 3 is 8