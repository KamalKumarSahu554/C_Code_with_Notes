// Program to find to Max & and Min in array
#include<stdio.h>

int main()
{
     int a[10], max, min;
     for (int i = 0; i < 10; i++)
     {
          printf("Enter number : ");
          scanf("%d", &a[i]);
     }
     
     max = min = a[0];
     for (int i = 0; i < 10; i++)
     {
          if (a[i] > max)
          {
               max = a[i];   
          }
          if (a[i] < min)
          {
               min = a[i];   
          }                      
     }     
     printf("\nMin number is %d.", min);
     printf("\nMax number is %d.", max);
     return 0;
}