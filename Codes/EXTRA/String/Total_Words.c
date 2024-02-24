//
#include <stdio.h>

int main()
{
     char a[100];
     int words = 1, i = 0;
     printf("Enter a Words : \n");
     gets(a);

     while (a[i] != '\0')
     {
          if (a[i] == ' ' && a[i + 1] != ' ')
          // if (a[i] == ' ')
          {
               words++;
          }
          i++;
     }
     printf("Total number of words = %d", words);
     return 0;
}