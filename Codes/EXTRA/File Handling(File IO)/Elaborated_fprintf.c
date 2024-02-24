//
#include<stdio.h>

int main()
{
     FILE *fptr;
     int roll, mark; 
     char name[30];
     fptr = fopen("emp.txt", "w");

     if (fptr == NULL)
     {
          printf("File does not exist");
          return 0;
     }
     printf("Enter your roll : ");
     scanf("%d", &roll);
     fprintf(fptr, "Roll = %d\n", roll);

     printf("Enter Name : ");
     scanf("%s", &name);
     fprintf(fptr, "Name = %s\n", name);

     printf("Enter your mark : ");
     scanf("%d", &mark);
     fprintf(fptr, "Mark = %d\n", mark);


     return 0;
}  