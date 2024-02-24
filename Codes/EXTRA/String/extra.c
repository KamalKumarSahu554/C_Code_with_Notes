//
#include<stdio.h>
char conca(char a[], char b[], char c[])
{
     int i, j;
     i = j = 0;
     while (a[i] != '\0')
     {
          c[i] = a[i];
          i++;
     }
     printf(" ");
     while (b[j] != '\0')
     {
          c[i] = b[j];
          i++;
          j++;
     }
     c[i] = '\0';

     return c;
}

int main()
{
     
     char a[50], b[50], c[100];
     printf("Enter First String : ");
     gets(a);
     printf("Enter Second String : ");
     gets(b);

     conca(a, b, c);

     printf("\nConcatenate String : %s", c);
     return 0;
}
