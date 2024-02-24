//
#include <stdio.h>

int main()
{
     char a[1000];
     int i, vol = 0, cons = 0;
     printf("Enter String : ");
     gets(a);
     i = 0;
     while (a[i] != '\0')
     {
          if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
          {
               if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
                   a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
               {
                    vol++;
               }
               else
               {
                    cons++;
               }
          }
          i++;
     }
     printf("\nTotal Vowels = %d and Total Constants = %d", vol, cons);
     return 0;
}