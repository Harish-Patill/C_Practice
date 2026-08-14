#include<stdio.h>
int main(){
    float start=0;
    float end=0;
    float increment=0;

    printf("Enter start: ");
    scanf("%f",&start);

    printf("Enter end: ");
    scanf("%f",&start);

    printf("Enter increment: ");
    scanf("%f",&start);

    while (start != end){
        printf("%f\n",start);
        start+=increment;
    }
    return 0;
}