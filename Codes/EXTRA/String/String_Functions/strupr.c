//strupr() function of  string converts lower case into upper case
#include<stdio.h>
#include<string.h>

int main()
{
     char str[50];
     printf("Enter Lower case String : ");
     gets(str);
     printf("String in Upper case : %s", strupr(str));
     return 0;
}