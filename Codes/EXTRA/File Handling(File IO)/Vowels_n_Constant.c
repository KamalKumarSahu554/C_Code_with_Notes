//
#include <stdio.h>

int main()
{
     FILE *fp;
     char c;
     int vowel = 0, cons = 0;
     fp = fopen("Para.txt", "r");
     c = 'a';

     while (c != EOF)
     {
          c = fgetc(fp);
          if ((c >= 'a' && c <= 'z') || (c > 'A' && c <= 'Z'))
          {
               if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                   c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
               {
                    vowel++;
               }
               else
               {
                    cons++;
               }
          }
     }

     printf("Total Vowel = %d\n", vowel);
     printf("Total Constant = %d", cons);
     
     fclose(fp);

     return 0;
}