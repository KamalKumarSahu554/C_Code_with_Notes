#include<stdio.h>
struct employee
{
     int code;
     char name[50];
     float salary;
};

void display(struct employee);

int main()
{
     struct employee a;
     printf("Enter Code : ");
     scanf("%d", &a.code);
     printf("Enter Name : ");
     scanf("%s", &a.name);
     printf("Enter Salary : ");
     scanf("%f", &a.salary);

     display(a);

     return 0;
}

void display(struct employee a)
{
     printf("\nCode = %d\n", a.code);
     printf("Name = %s\n", a.name);
     printf("Salary = %.2f\n", a.salary);
}