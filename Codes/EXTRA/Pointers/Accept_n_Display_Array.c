#include<stdio.h>

int main()
{
     int a[10], *p;

     for (int i = 0; i < 10; i++)
     {
               printf("Enter number %d : ",i+1);
               scanf("%d", &a[i]);
     }

     p = &a[0]; // or  p = a;
     printf("\nArray eliment are : \n");

     for (int i = 0; i < 10; i++)
     {
          printf("%d\t", *(p+i) );
     }

     return 0;
}