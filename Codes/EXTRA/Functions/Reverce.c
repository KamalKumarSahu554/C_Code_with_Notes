// reverce vale (WANR)
#include<stdio.h>
void reverce(int x);
int main()
{
     int a;
     printf("Enter Number : ");
     scanf("%d", &a);
     reverce(a);
     return 0;
}
void reverce(int x)
{
     int rev = 0;
     while (x > 0)
     {
          rev = (rev*10) + x % 10;
          x = x/10;
     }
     printf("Reverce value = %d", rev);
}