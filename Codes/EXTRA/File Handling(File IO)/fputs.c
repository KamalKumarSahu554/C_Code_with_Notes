//
#include<stdio.h>
#include<conio.h>
int main()
{
     FILE *fp;
     fp = fopen("file3.txt","w");
     fputs("Hello C programming", fp);
     //printf("File created successfully...");
     fclose(fp);
     return 0;

}