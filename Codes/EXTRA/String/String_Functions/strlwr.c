//strlwr() function of  string converts upper case into lower case
#include<stdio.h>
#include<string.h>

int main()
{
     char str[50];
     printf("Enter Upper case String : ");
     gets(str);
     printf("String in lower case : %s", strlwr(str));
     return 0;
}