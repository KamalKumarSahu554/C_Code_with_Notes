//
#include<stdio.h>

int main()
{
     FILE *ptr;
     int num, num2;
     ptr = fopen("IntNum.txt", "r");
     fscanf(ptr, "%d", &num);
     fscanf(ptr, "%d", &num2);
     fclose(ptr);
     printf("\nThe value of num is : %d\n ", num);
     printf("\nThe value of num2  is : %d\n ", num2);
     return 0;
}