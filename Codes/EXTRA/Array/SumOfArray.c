//
#include<stdio.h>

int main()
{
     int sum = 0, a[5];
     for (int i = 0; i < 5; i++)
     {
          printf("Enter Number : ");
          scanf("%d", &a[i]);
     }
     for (int i = 0; i < 5; i++)
     {
          sum = sum + a[i];
     }

     printf("\nThe sum of array numbers : %d", sum);
     
     
     return 0;
}