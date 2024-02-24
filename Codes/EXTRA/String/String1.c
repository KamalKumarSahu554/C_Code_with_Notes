// Take input from user
#include<stdio.h>

int main()
{
     char a[50];
     printf("\nEnter Yoour name : ");
     //scanf("%s", &a); // %s can be take fisr word of input
     gets(a);
     printf("Your Name is %s", a);
     return 0;
}