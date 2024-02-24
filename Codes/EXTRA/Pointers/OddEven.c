// Find odd or even using pointer
#include<stdio.h>

int main()
{    
     int a, *p = &a;
     
     printf("Enter number to check Odd or Even : ");
     scanf("%d", &*p);
     if (*p %2 == 0)
     {
          printf("Enterd number %d is Even.", *p);
     }
     else
     {
          printf("Enterd number %d is Odd.", *p);
     }
     
     return 0;
}