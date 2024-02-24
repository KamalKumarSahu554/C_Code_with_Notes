// Addition of two numbers
// No Argument No Return
#include <stdio.h>
void add(void); // Function Prototype
int main()
{
     add(); // Function Call
     return 0;
}

void add() // Function Defination
{
     int a, b, sum;
     printf("Enter first number : ");
     scanf("%d", &a);
     printf("Enter first number : ");
     scanf("%d", &b);

     sum = a + b;
     printf("Sum of two number is : %d", sum);
}