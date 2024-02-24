//multiplication table for n input nubber
#include<stdio.h>

int main()
{
   int i, num;
   
   printf("Enter the nunber : \n");
   scanf("%d", &num);
   printf("Multiplication of '%d'\n", num);
   for (i = 1; i <= 10; i++)
   {
      printf("%d X %d = %d\n", num, i, num*i);
  
   }
   
   return 0;
}