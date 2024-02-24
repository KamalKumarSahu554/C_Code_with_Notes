//hihjnb
#include<stdio.h>

int main()
{
     FILE *fp;
     fp = fopen("file2.txt","w");
     fprintf(fp, "Hello world in the file handling");
     printf("File created successfully...");
     fclose(fp);
     return 0;
}