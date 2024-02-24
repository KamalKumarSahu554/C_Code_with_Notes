//Find factorial of given number using Reccursion
#include <stdio.h>
int factorial(int);

int main()
{
     int num, ans;
     printf("Enter number for factorial : ");
     scanf("%d", &num);
     ans = factorial(num);
     printf("Factorial of %d is : %d", num, ans);
     return 0;
}
int factorial(int num)
{
     int facto;
     if (num == 0)
     {
          return 1;
     }
     else
     {
          facto = num * factorial(num - 1);
     }
     return facto;
}