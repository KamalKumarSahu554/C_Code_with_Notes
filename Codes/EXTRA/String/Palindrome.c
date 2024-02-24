// Whether a program input sting palindrome or not
#include <stdio.h>
#include <string.h>
int main()
{
     char a[50], b[50];
     int j = 0, flag = 0;
     printf("Enter a String : ");
     gets(a);

     for (int i = strlen(a)-1; i >= 0; i--)
     {
          b[j] = a[i];
          j++;
     }
     b[j] = '\0';

     for (int i = 0; i <= strlen(a); i++)
     {
          if (a[i] != b[i])
          {
               flag = 1;
               break;
          }
          
     }

     if (flag == 0) 
     {
          printf("Palindrome Sring");
     }
     else
     {
          printf("Not Palindrome sting");
     }
     
     return 0;
}