//
#include<stdio.h>
void add(int *, int *);

int main()
{
     int a, b, *p, *q;
     printf("Enter number no.1 : ");
     scanf("%d", &a);
     printf("Enter number no.2 : ");
     scanf("%d", &b);

     p = &a;
     q = &b;
     add(p, q);  
     return 0;
}
void add(int *p, int *q)
{
     int c = *p + *q;
     printf("Sum of %d and %d is : %d", *p, *q, c);
}