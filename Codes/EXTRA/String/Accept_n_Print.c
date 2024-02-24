// Accept and print it character by character
#include <stdio.h>

int main()
{
     char name[50];
     printf("Enter your name : ");
     scanf(name);
     // int i = 0;
     // while (name[i] != '\0')
     // {
     //      printf("%c", name[i]);
     //      i++;
     // }
     printf("%s", name);
     return 0;
}