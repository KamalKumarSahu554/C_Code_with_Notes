//
#include<stdio.h>
void prime(int);
int main()
{
     int x;
     printf("Enter number : ");
     scanf("%d", &x);
     prime(x);
     return 0;
}
void prime(int x)
{
     int count = 0;
     for (int i = 1; i <= x; i++)
     {
          if (x%i == 0)
          {
               count++;
          }
     }

     if (count == 2)
     {
          printf("\n The number is Prime");
     }
     else
     {
          printf("\nNumber is not Prime");
     }
     
     
}