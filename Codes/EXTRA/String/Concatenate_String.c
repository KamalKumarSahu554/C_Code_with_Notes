//
#include <stdio.h>

int main()
{
     int i, j;
     i = j = 0;
     char a[50], b[50], c[100];
     printf("Enter First String : ");
     gets(a);
     printf("Enter Second String : ");
     gets(b);

     while (a[i] != '\0')
     {
          c[i] = a[i];
          i++;
     }
     while (b[j] != '\0')
     {
          c[i] = b[j];
          i++;
          j++;
     }
     c[i] = '\0';

     printf("\nConcatenated String : %s", c);

     return 0;
}