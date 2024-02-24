// Fibonaccci Series using Reursion
#include <stdio.h>
void fibonacci(int);

int main()
{
     int n;
     printf("Enter number : ");
     scanf("%d", &n);
     printf("\n0\n1");
     fibonacci(n - 1);
     return 0;
}
void fibonacci(int n)
{
     static int n1 = 0, n2 = 1, n3;
     if (n > 0)
     {
          n3 = n1 + n2;
          n1 = n2;
          n2 = n3;
          printf("\n%d", n3);
          fibonacci(n-1);
     }
}