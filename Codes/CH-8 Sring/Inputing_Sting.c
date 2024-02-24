// Taking input from user using %s
#include <stdio.h>

int main()
{
     char str[50];
     printf("Enter your name : ");
     scanf("%s", str);
     printf("Your name is %s", &str);
     return 0;
}