// Unnion is same as structure except folloiwing deference
// 1. write union instead of structure
// 2. memory allocation only for largest value
// -> in this case name[50] is largest
#include <stdio.h>
union company
{
     int code;
     char name[50];
     float salary;
};

// int main()
// {
//      union company employee;

//      printf("Enter Code : ");
//      scanf("%d", &employee.code);
//      printf("Enter Name : ");
//      scanf("%s", &employee.name);
//      printf("Enter Salary : ");
//      scanf("%f", &employee.salary);

//      printf("\nCode = %d\n", employee.code); // print garbage values
//      printf("Name = %s\n", employee.name); // print garbage values
//      printf("Salary = %.2f\n", employee.salary);

//      return 0;
// }

// For avoding garbage value we print input after output
int main()
{
     union company employee;

     printf("Enter Code : ");
     scanf("%d", &employee.code);
     printf("Code = %d\n", employee.code);

     printf("\nEnter Name : ");
     scanf("%s", &employee.name);
     printf("Name = %s\n", employee.name);

     printf("\nEnter Salary : ");
     scanf("%f", &employee.salary);
     printf("Salary = %.2f\n", employee.salary);

     return 0;
}