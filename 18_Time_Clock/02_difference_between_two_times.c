#include<stdio.h>

int main(){
    int h1, m1, h2, m2;

    printf("Enter first time (HH MM): ");
    scanf("%d %d", &h1, &m1);

    printf("Enter second time (HH MM): ");
    scanf("%d %d", &h2, &m2);

    int t1 = h1 * 60 + m1;   // convert both to total minutes
    int t2 = h2 * 60 + m2;

    int diff = t2 - t1;
    if (diff < 0){ 
        diff += 24 * 60;   // wrap around midnight if needed
    }
    
    int diffH = diff / 60;
    int diffM = diff % 60;

    printf("Difference: %02d:%02d\n", diffH, diffM);

    return 0;
}