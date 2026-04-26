#include<stdio.h>
int main(){
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    switch(num){
        case 1:
            printf("%dst day of week is Monday\n",num);
            break;
        case 2:
            printf("%dnd day of week is Tuesday\n",num);
            break;
        case 3:
            printf("%drd day of week is Wednesday\n",num);
            break;
        case 4:
            printf("%dth day of week is Thursday\n",num);
            break;
        case 5:
            printf("%dth day of week is Friday\n",num);
            break;
        case 6:
            printf("%dth day of week is Saturday\n",num);
            break;
        case 7:
            printf("%dth day of week is Sunday\n",num);
            break;
        default:
            printf("Invalid Input, try again\n");
            break;
    }
    return 0;
}