//
#include<stdio.h>

int main()
{
     char name[50];
     printf("\nEnter Your name : ");
     gets(name); // gets() use for take multi word input
     printf("\nYour Name is %s\n", name);
     puts(name); // puts use for printing the output in string
     return 0;
}