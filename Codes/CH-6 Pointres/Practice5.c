//
#include<stdio.h>

int main()
{
     int  i = 5;
     int *j = &i;
     int **k = &j;
     printf("The value of i is : %d\n", **k);
     return 0;
}