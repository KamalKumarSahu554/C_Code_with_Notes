// Array of structure for Employee
#include <stdio.h>
struct employee
{
     int code;
     char name[50];
     float salary;
};

int main()
{
     struct employee a[10];
     int key, pos, flag = 0;

     for (int i = 0; i < 3; i++)
     {
          printf("\nEnter Code %d : ", i + 1);
          scanf("%d", &a[i].code);
          printf("Enter Name %d : ", i + 1);
          scanf("%s", a[i].name);
          printf("Enter Salary %d : ", i + 1);
          scanf("%f", &a[i].salary);
     }

     printf("\nEnter employee code to search : ");
     scanf("%d", &key);

     for (int i = 0; i < 3; i++)
     {
          if (a[i].code == key)
          {
               flag = 1;
               pos = i;
               break;
          }
     }

     if (flag == 1)
     {
          printf("\nCode = %d\n", a[pos].code);
          printf("Name = %s\n", a[pos].name);
          printf("Salary = %f\n", a[pos].salary);
     }
     else
     {
          printf("Search value not found");
     }

     return 0;
}