// Addition of two numbers
// With Argument No Return
#include <stdio.h>
void add(int, int); // Function Prototype
int main()
{
     int a, b;
     printf("Enter first number : ");
     scanf("%d", &a);
     printf("Enter first number : ");
     scanf("%d", &b);
     add(a, b); // Function Call
     return 0;
}

void add(int a, int b) // Function Defination
{
     int sum;
     sum = a + b;
     printf("Sum of two number is : %d", sum);
}