//Passing value of a function
#include<stdio.h>

// Sum is a function wbhich takes a and b as input return an intiger as an output
int sum(int a, int b);// Function prototype declaration
int main()
{
     int c;
     c = sum(10, 5);//fucntion call
     printf("The value of c is %d", c);
     
     return 0;
}
int sum(int a, int b)
{
     int c;
     c = a + b;
     return c;
}