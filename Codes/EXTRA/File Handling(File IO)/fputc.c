// fputc is used for -> put a character in a file
#include <stdio.h>

int main()
{
     FILE *fp;
     fp = fopen("file1.txt", "w"); // openinng file
     fputc('a', fp); // writing a single character into file
     fclose(fp); // closing file
     return 0;
}