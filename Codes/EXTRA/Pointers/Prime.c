// Given number is prime or not 
#include<stdio.h>

int main()
{
     int a, *p, count = 0;
     printf("Enter number : ");
     scanf("%d", &a);
     p = &a;

     for (int i = 1; i <= *p; i++)
     {
          if (*p % i == 0)
          {
               count++;
          }
     }
     
     if (count == 2)
     {
          printf("%d is prime number.", *p);
     }
     else
     {
          printf("%d is not prime number.", *p);
     }
     
     return 0;
}