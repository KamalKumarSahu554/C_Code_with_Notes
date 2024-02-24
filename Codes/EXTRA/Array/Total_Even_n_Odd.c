//Program to find sum of total even and product of total odd numbers
#include<stdio.h>

int main()
{
     int a[10], even = 0, odd = 0;
     int prod = 1;

     for (int i = 0; i < 10; i++)
     {
          printf("Enter number : ");
          scanf("%d", &a[i]);
     }

     for (int i = 0; i < 10; i++)
     {
          if (a[i]%2 == 0)
          {
               // for count total even num. -->  even++ only
               even = even + a[i];
          }
          else
          {
               // for count total odd num. -->  odd++ only
               //odd = odd + a[i];
               prod = prod * a[i];
          }
     }
     
     printf("Sum of total even number = %d\nSum of total odd number = %d", even, prod);
     
     return 0;
}