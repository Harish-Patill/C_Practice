#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int prev=-1, flag=0;
    int original=num;

    if(original==0) prev=0;                     // copy the nums value in a vaiable in order to perform the operation

    while(original>0){
        int bit=original%2;                     // get the bit of the num
        if(bit==1 && prev==1){                  // check if the current bit and the prev bit are 1
            flag=1;                             // if yes, then turn on the flag
        }
        prev=bit;                               // update the prev variable with the new bit, as the bit will be updated with the new value
        original=original/2;                    // update the variable by removing the last digit
    }

    if(flag) printf("It has adjacent 1's\n");
    else printf("It doesn't have adjacent 1's\n");

    return 0;
}