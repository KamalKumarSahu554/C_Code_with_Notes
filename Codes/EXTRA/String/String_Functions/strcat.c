//strcat function of string concatenate second string in first sting
#include<stdio.h>
#include<string.h>

int main()
{
     char s1[100], s2[50];
     printf("Enter first sring : ");
     gets(s1);
     printf("Enter second sring : ");
     gets(s2);

     strcat(s1, s2);
     printf("Output string after concatenation : %s", s1);
     return 0;
}