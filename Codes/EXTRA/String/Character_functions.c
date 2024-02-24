//
#include <stdio.h>
#include <ctype.h>

int main()
{
     char ch;
     printf("\nEnter an Alphabet : ");
     scanf("%c", &ch);

     if (isalpha(ch))
     {
          printf("\nThe character is an Alphabet");
     }
     else
     {
          printf("\nThe character is not an Alphabet");
     }

     if (isdigit(ch))
     {
          printf("\nThe character is a Digit");
     }
     else
     {
          printf("\nThe character is not a Digit");
     }

     if (isalnum(ch))
     {
          printf("\nThe character is either an Alphabet or a Digit");
     }
     else
     {
          printf("\nThe character is neither an Alphabet nor a Digit");
     }

     if (isspace(ch))
     {
          printf("\nThe character is a space");
     }
     else
     {
          printf("\nThe character is not a space");
     }

     if (islower(ch))
     {
          printf("\nThe character is a lower case alphabet");
     }
     else
     {
          printf("\nThe character is not a lower case alphabet");
     }

     if (isupper(ch))
     {
          printf("\nThe character is a Upper case alphabet");
     }
     else
     {
          printf("\nThe character is not a Upper case alphabet");
     }

     if (isalpha(ch))
     {
          printf("\nThe character in lower case = %c", tolower(ch));
          printf("\nThe character in Upper case = %c", toupper(ch));
     }
    

     return 0;
}