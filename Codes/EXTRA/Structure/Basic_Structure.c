//
#include<stdio.h>
struct Employee
{
     int epm_code;
     char emp_name[50];
     char designation[50];
     float salary;
};


int main()
{
     struct Employee a;
     printf("Enter employee code : ");
     scanf("%d", &a.epm_code);
     printf("Enter employee name : ");
     scanf("%s",&a.emp_name);
     printf("Enter employee designation : ");
     scanf("%s",&a.designation);
     printf("Enter employee salary : ");
     scanf("%f", &a.salary);

     printf("\nEmployee code : %d\n", a.epm_code);
     printf("Employee name : %s\n", a.emp_name);
     printf("Employee designation : %s\n", a.designation);
     printf("Employee salary : %.2f\n", a.salary);
     return 0;
}