// Print string

#include<stdio.h>

int main()
{
    char str[] = "KAMAL KUMAR SAHU";
    char *ptr = str;
    while (*ptr != '\0')
    {
     printf("%c", *ptr);
     ptr++;
    }
    
     return 0;
}