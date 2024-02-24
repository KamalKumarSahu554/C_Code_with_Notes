// strcmp() function used for compare two strings and return a integer value
#include <stdio.h>
#include <string.h>

int main()
{
     char a[50], b[50];
     printf("Enter First String : ");
     gets(a);
     printf("Enter Second String : ");
     gets(b);

     // strcmp() function is case sensetive
     if (strcmp(a, b) == 0)
     {
          printf("Equal Strings");
     }
     else if (strcmp(a, b) > 0)
     {
          printf("Frist Strings is Greater");
     }
     else
     {
          printf("Second Strings is Greater");
     }

     return 0;
}