// Structure with Pointer
#include <stdio.h>
struct company
{
     int code;
     char name[50];
     float salary;
};

void display(struct company *);

int main()
{
     struct company employee;
     printf("Enter Code : ");
     scanf("%d", &employee.code);
     printf("Enter Name : ");
     scanf("%s", &employee.name);
     printf("Enter Salary : ");
     scanf("%f", &employee.salary);

     display(&employee);

     return 0;
}

void display(struct company *employee)
{
     printf("\nCode = %d\n", employee->code);
     printf("Name = %s\n", employee->name);
     printf("Salary = %.2f\n", employee->salary);
}