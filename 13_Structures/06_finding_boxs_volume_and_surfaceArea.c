#include<stdio.h>

struct Box {
    float length;
    float breadth;
    float height;
};

int main(){
    struct Box b;

    printf("Enter length: ");
    scanf("%f", &b.length);

    printf("Enter breadth: ");
    scanf("%f", &b.breadth);

    printf("Enter height: ");
    scanf("%f", &b.height);

    float volume = b.length * b.breadth * b.height;
    float surfaceArea = 2 * (b.length * b.breadth + b.breadth * b.height + b.height * b.length);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}