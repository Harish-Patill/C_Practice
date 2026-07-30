#include<stdio.h>

struct student{
    char name[100];
    int roll_num;
    float cgpa;
};

int main(){
    struct student s;

    printf("Enter name: ");
    scanf(" %[^\n]",s.name);

    printf("Enter your USN: ");
    scanf("%d",&s.roll_num);

    printf("Enter your CGPA: ");
    scanf("%f",&s.cgpa);

    printf("\n\t::Student Details::\n");
    printf("Name: %s\n",s.name);
    printf("USN : %d\n",s.roll_num);
    printf("CGPA: %.2f\n",s.cgpa);


    return 0;
}