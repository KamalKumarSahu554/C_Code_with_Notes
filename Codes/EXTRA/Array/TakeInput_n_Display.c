//
#include<stdio.h>

int main()
{
     int a[10];

     for (int i = 0; i < 10; i++)
     {
               printf("Enter number %d : ",i+1);
               scanf("%d", &a[i]);
     }

     printf("\nArray eliment are : \n");

     for (int i = 0; i < 10; i++)
     {
          printf("%d\t", a[i]);
     }

     return 0;
}