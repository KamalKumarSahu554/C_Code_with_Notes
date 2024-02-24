// Addition of two numbers
// With Argument No Return
#include <stdio.h>
int add(int, int); // Function Prototype
int main()
{
     int a, b, sum;
     printf("Enter first number : ");
     scanf("%d", &a);
     printf("Enter first number : ");
     scanf("%d", &b);
     sum = add(a, b); // Function Call
     printf("Sum of two number is : %d", sum);
     return 0;
}

int add(int a, int b) // Function Defination
{
     int c;
     c = a + b;
     return (c);
}
