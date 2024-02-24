// strcmpi() function used for compare two strings and return a integer value
// it is not case sensetive
#include <stdio.h>
#include <string.h>

int main()
{
     char a[50], b[50];
     printf("Enter First String : ");
     gets(a);
     printf("Enter Second String : ");
     gets(b);

     // strcmpi() function is not case sensetive as strcmp()
     if (strcmpi(a, b) == 0)
     {
          printf("Equal Strings");
     }
     else if (strcmpi(a, b) > 0)
     {
          printf("Frist Strings is Greater");
     }
     else
     {
          printf("Second Strings is Greater");
     }

     return 0;
}