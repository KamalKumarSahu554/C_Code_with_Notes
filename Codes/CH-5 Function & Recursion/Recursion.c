// Factoral Using Recursion
#include<stdio.h>
int factorial(int x);

int main()
{
     int a;
     printf("Enter a vale : ");
     scanf("%d", &a);
     printf("The Factorial of %d is : %d",a, factorial(a));
     return 0;
}
int factorial(int x)
{
     //printf("Calling factorial (%d) \n", x);
     if (x == 0 || x == 1)
     {
          return 1;
     }
     else
     {
          return x * factorial(x - 1);
     }
     
}