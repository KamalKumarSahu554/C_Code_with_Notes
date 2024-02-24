//Write a Function to find sum of array
#include<stdio.h>
void arraySum(int a[], int);
int main()
{
     int a[50], size;
     printf("Enter the size of array : " );
     scanf("%d", &size);
     for (int i = 0; i < size; i++)
     {
          printf("Enter Number : ");
          scanf("%d", &a[i]);
     }
     arraySum(a, size);
     return 0;
}
void arraySum(int a[], int size)
{
     int sum = 0;
     for (int i = 0; i < size; i++)
     {
          sum = sum + a[i];
     }

     printf("\nThe sum of array numbers : %d", sum);
     
}