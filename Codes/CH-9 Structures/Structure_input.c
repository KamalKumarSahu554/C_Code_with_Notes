// Input from user
#include<stdio.h>
struct employee
{
     int code;
     float salary;
     char name [10];
};


int main()
{
     struct employee e1, e2, e3;
     printf("Enter the value for code of e1 : ");
     scanf("%d", &e1.code);
     printf("Enter the value for salary of e1 : ");
     scanf("%f", &e1.salary);
     printf("Enter the value for name of e1 : ");
     scanf("%s", e1.name);

     printf("\nEnter the value for code of e2 : ");
     scanf("%d", &e2.code);
     printf("Enter the value for salary of e2 : ");
     scanf("%f", &e2.salary);
     printf("Enter the value for name of e2 : ");
     scanf("%s", e2.name);

     printf("\nEnter the value for code of e1 : ");
     scanf("%d", &e1.code);
     printf("Enter the value for salary of e1 : ");
     scanf("%f", &e1.salary);
     printf("Enter the value for name of e1 : ");
     scanf("%s", e1.name);

     return 0;
}