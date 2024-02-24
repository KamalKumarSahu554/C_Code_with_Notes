// Accept a string and count total number of character
#include <stdio.h>

int main()
{
     char name[100];
     printf("Enter Your name : ");
     gets(name);
     int i = 0;

     while (name[i] != '\0')
     {
          i++;
     }
     printf("\nTotal number of characters = %d", i);
     return 0;
}