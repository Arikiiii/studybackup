#include <stdio.h>
int main ()
{
    char grade;
    int age;
    float gpa;
    double next_gpa;
    printf("\nEnter Grade = ");scanf("%c",&grade);
    printf("\nEnter Age = ");scanf("%d",&age);
    printf("\nEnter GPA = ");scanf("%f",&gpa);
    printf("\nEnter Age = ");scanf("%lf",&next_gpa);
    printf("=================================\n ");
    printf("\nMy Grade \t= %c\n",grade);
    printf("My age \t\t= %d\n",age);
    printf("My GPA \t\t= %.2f\n",gpa);
    printf("My Next GPA \t= %.4f\n",next_gpa);
    printf("=================================\n ");
    return 0;


}
