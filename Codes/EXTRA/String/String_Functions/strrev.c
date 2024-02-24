// Reverce a string using strrev()
#include<stdio.h>
#include<string.h>

int main()
{
     char a[50];
     printf("Enter a String : ");
     gets(a);
     printf("String in revese order : %s", strrev(a));
     return 0;
}