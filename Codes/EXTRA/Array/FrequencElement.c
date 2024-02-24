// Program to count Freuency of Elements of in array  
#include<stdio.h>

int main()
{
int a[10], freq = 0, key;

    for (int i = 0; i < 10; i++)
    {
          printf("Enert numbers : ");
          scanf("%d", &a[i]);
    }

     printf("\nEnter number to find frequency : ");
     scanf("%d", &key);
    for (int i = 0; i < 10; i++)
     {
          if (a[i] == key)
          freq++;
     }
          
     printf("\nFrequency of %d is : %d", key, freq);
     
     return 0;
}