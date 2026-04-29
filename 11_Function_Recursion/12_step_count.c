//WAP to calculate the total number of ways to climb stairs where the user can take single or double steps;

#include<stdio.h>
int step_count(int n){
    if(n == 1 || n== 2) return n;
    return step_count(n-1)+step_count(n-2);
}   

int main(){
    int num=0;
    printf("Enter nth number: ");
    scanf("%d",&num);

    printf("Total number of combinations to reach %d are: %d\n",num,step_count(num));  //can call a function and print this way, reduces a line..

    return 0;
}

// sample output:

// Enter nth number: 5
// Total number of combinations to reach 5 are: 8