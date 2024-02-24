// These function read from the file
#include <stdio.h>

int main()
{
     FILE *fp;
     char c;
     fp = fopen("student.txt", "r");
     while ((c = fgetc(fp)) != EOF)
     {
          printf("%C", c);
     }
     fclose(fp);
     return 0;
}