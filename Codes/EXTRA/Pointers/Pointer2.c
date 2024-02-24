// aadition of two number using pointer
#include <stdio.h>

int main()
{
     int a = 5, b = 10, c, *p, *q;
     p = &a;
     q = &b;
     c = *p + *q;
     printf("\nValue of c %u.", c);

     return 0;
}