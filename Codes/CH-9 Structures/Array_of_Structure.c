// Array structure
#include<stdio.h>
#include<string.h>

struct employee
{
     int code;
     float salary;
     char name[20];
};

int main()
{
     struct employee kamal = {100, 34.23, "Harry"};

     printf("Code is = %d\n", kamal.code);
     printf("Salary is = %.2f\n", kamal.salary);
     printf("Name is = %s", kamal.name);

     return 0;
}