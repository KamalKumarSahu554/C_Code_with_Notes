 //strcpy() function used for copy first string to second string

 #include<stdio.h>
 #include<string.h>

 int main()
 {
     char s1[50], s2[50];
     printf("Enter sring for s1 : ");
     gets(s1);

     //Copy s1 string to s2 string
     strcpy(s2, s1);
     printf("copied string in s2 : %s", s2);
     return 0;
 }