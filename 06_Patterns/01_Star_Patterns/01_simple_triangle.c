                                                                                                                                                                            /*
* 
* *
* * * 
* * * * 
                                                                                                                                                                            */

#include<stdio.h>
int main(){
    int num=0;
    printf("Enter the size: ");
    scanf("%d",&num);

    for(int i=0;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}