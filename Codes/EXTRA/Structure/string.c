//
#include<stdio.h>
struct name
{
     int k;
     char n[50];
     char m[50];
};


int main()
{
     struct name a;

     printf("Enter k : ");
     scanf("%d", &a.k);
     printf("Enter n : ");
     gets(a.n);

     printf("Enter m : ");
     gets(a.m);

     printf("n : %s", a.n);
     printf("\nm : %s", a.m);
     return 0;
}