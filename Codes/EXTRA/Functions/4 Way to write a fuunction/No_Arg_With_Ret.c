// Addition of two numbers
// No Argument with Return
#include <stdio.h>
int add(void); // Function Prototype
int main()
{
     int sum;
     sum = add(); // Function Call
     printf("Sum of two number is : %d", sum);
     return 0;
}

int add() // Function Defination
{
     int a, b, c;
     printf("Enter first number : ");
     scanf("%d", &a);
     printf("Enter first number : ");
     scanf("%d", &b);
     c = a + b;
     return (c);
}