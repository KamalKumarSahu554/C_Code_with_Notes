//Print alternet Array elements
#include<stdio.h>

int main()
{
     int a[10];

     for (int i = 0; i < 10; i++)
     {
               printf("Enter number %d : ",i+1);
               scanf("%d", &a[i]);
     }

     printf("\nAlternate Array eliment are : \n");

     for (int i = 0; i < 10; i = i+2)
     {
          printf("%d\t", a[i]);
     }

     return 0;
}