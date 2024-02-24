// Pointers basics
#include<stdio.h>

int main()
{
     int i = 34;
     int *j = &i;
     int **k = &j; // pointer k store the adderss of pointer j
     printf("The value of i %d\n", i);
     printf("The value of j %d\n", *j);
     printf("The address of i %u\n", &i);
     printf("The adreess of i %u\n", j);
     printf("The address of j %u\n", &j);
     printf("The value of j %u\n", *(&j));
     printf("The address of j %u\n", k);
     printf("The address of j %u\n", **k);


     return 0;
}