//
#include<stdio.h>

void printArray(int *ptr, int n)
{
     for (int i = 0; i < n; i++)
     {
          printf("The value of eliment %d is %d\n", i+1, *(ptr+i));
     }
}
int main()
{
     int arr[] = {23,45,3432,324,32.23,12};
     printArray(arr,6);
     return 0;
}