// Address and valuee of variable 
#include <stdio.h>

int main()
{
     int a = 5, b = 10;
     printf("Address of a and b is %u and %u.", &a, &b);
     printf("\nValue of a and b is %u and %u.", a, b);

     return 0;
}