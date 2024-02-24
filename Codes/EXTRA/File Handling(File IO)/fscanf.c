//
#include<stdio.h>

int main()
{
     FILE *fp;
     char buff[500];
     fp = fopen("Para.txt", "r");
     if (fp == NULL)
     {
          printf("File could not be opened");
          return 0;
     }
     
     while ((fscanf(fp, "%s", buff)) != EOF);
     {
          printf("%s ", buff);
     }
     fclose(fp);
     return 0;
}