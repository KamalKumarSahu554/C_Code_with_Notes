// Call By Value
#include<stdio.h>
int sum(int a, int b);


int main()
{
     int x = 4, y = 7;
     printf("The value of x and b is %d and %d\n", x, y); 
     printf("The value of x + b is %d\n", sum(x, y));
     printf("The value of x and b after function call is %d and %d\n", x, y);
     

     return 0;
}

int sum(int a, int b)
{
     return a + b;
}
