// In this Palindrome used built in function of sring, like strrev() and Strcmpi
#include<stdio.h>
#include<string.h>

int main()
{
     char a[50], b[50];
     printf("Enter a String : ");
     gets(a);
     strcpy(b, a);
     strrev(b);

     if (strcmpi(a, b) == 0)
     {
          printf("It is a palindrome sring");
     }
     else
     {
          printf("Not a palindrome string");
     }
     

     return 0;
}