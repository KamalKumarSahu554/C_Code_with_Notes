//Table of multiplication n numbers using Array
#include<stdio.h>

int main()
{
     int num;
     int mul[10];
     printf("Enter a num : ");
     scanf("%d", &num);

     for (int i = 0; i < 10; i++)
     {
          mul[i] = num * (i+1);
     }
     
     for (int i = 0; i < 10; i++)
     {
          printf("%dX%d = %d\n", num, i+1, mul[i]);
     }
     return 0;
}

