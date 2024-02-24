//
#include<stdio.h>

int main()
{
     int mark[4];
     int *ptr = &mark[0];

     for (int i = 0; i < 4; i++)
     {
          printf("Enter the value of mark for student %d : ", i+1);
          scanf("%d", ptr);
          ptr++;
     }

     for (int i = 0; i < 4; i++)
     {
          printf("Mark of student %d is %d: \n", i+1, mark[i]);
     }
     
     return 0;
}