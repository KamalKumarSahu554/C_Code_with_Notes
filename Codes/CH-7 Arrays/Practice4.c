// Multiplication table of 2, 7 and 9 using array and function
#include<stdio.h>
void printTable(int *mulTable, int num, int n)
{
     printf("The value of %d is : \n", num);
     for (int i = 0; i < n; i++)
     {
          mulTable[i] = num*(i+1);
     }
     for (int i = 0; i < n; i++)
     {
          printf("%dX%d = %d\n", num, i+1, mulTable[i]);
     }    
     printf("********************************\n\n");
}

int main()
{
     int mulTable[3][10];
     printf("Enter : ");
     scanf("%d", mulTable[3]);
     printTable(mulTable[0], 2, 10);
     printTable(mulTable[1], 7, 10);
     printTable(mulTable[2], 9, 10);
     return 0;
}