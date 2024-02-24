//
#include<stdio.h>

int main()
{
     FILE *ptr;
     //fgetc demo for reading afile
     // ptr = fopen("getcdemo.txt", "r");
     // // printf("The value of my caracter is : %c\n", fgetc(ptr));
     // printf("The value of my caracter is : %c\n", fgetc(ptr));
     // printf("The value of my caracter is : %c\n", fgetc(ptr));
     // printf("The value of my caracter is : %c\n", fgetc(ptr));
     // printf("The value of my caracter is : %c\n", fgetc(ptr));
     // printf("The value of my caracter is : %c\n", fgetc(ptr));
    
    ptr = fopen("putcdemo.txt", "w");
    putc('T', ptr);
    putc('h', ptr);
    putc('i', ptr);
    putc('s', ptr);
    putc('h', ptr);

    fclose(ptr);
     return 0;
}  