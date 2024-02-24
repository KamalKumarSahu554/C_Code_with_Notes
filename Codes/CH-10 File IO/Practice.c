//
#include<stdio.h>

int main()
{
     int a, b, c;
     FILE *ptr;
     ptr = fopen("pr1.txt", "r");
     fscanf(ptr, "%d %d %d", &a, &b, &c);
     printf("The value of a, b, and c is : %d, %d, and %d", a, b, c);
     return 0;
}