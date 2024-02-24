//Reverce a array
#include<stdio.h>
void reverce(int *arr, int n)
{
     int temp;
     for (int i = 0; i < (n/2); i++)
     {
          temp = arr[i];
          arr[i] = arr[n-i-1];
          arr[n-i-1] = temp;
     }    
}

int main()
{
     int arr[] = {1,2,3,4,5,6,7};
     reverce(arr, 7);
     for (int i = 0; i < 7; i++)
     {
          printf("The value of %d eliment is : %d\n", i+1, arr[i]);
     }
     return 0; 
}