// Taking input from user using get() for multiple words
#include <stdio.h>

int main()
{
     char str[50];
     printf("Enter your name : ");
     //scanf("%s", str); // For printr one word only
     gets(str); // Taking input from user for multiple words
     printf("Your name is %s", &str);
     puts(str); // input print in next line
     return 0;
}