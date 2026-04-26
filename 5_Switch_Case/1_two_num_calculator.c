#include<stdio.h>
int main(){
    int n1,n2;
    char symbol;
    printf("Enter num1 and num2: ");
    scanf("%d %d",&n1,&n2);

    printf("Enter the operation (+,-,/,x): ");
    scanf(" %c",&symbol);

    switch(symbol){
        case '+':
            printf("%d+%d:%d\n",n1,n2,n1+n2);
            break;
        case '-':
            printf("%d-%d:%d\n",n1,n2,n1-n2);
            break;
        case '/':
            printf("%d/%d:%d\n",n1,n2,n1/n2);
            break;
        case 'x':
            printf("%dx%d:%d\n",n1,n2,n1*n2);
            break;
        default:
            printf("Invalid Input, try again\n");
            break;
    }

    return 0;
}