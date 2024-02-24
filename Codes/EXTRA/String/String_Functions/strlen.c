//Length of sring using strlen()
#include<stdio.h>
#include<string.h>

int main()
{
     char str[50];
     printf("Enter string : ");
     gets(str);
     printf("Length of the string is : %d", strlen(str));
     return 0;
}