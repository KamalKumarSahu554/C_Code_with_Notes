 //Copy a Strimg into another sting
 #include<stdio.h>
 
 int main()
 {
     int i = 0; char a[50], b[50];
     printf("Enter a String : ");
     gets(a);
     while (a[i] != '\0')
     {
          b[i] = a[i];
          i++;
     }
     b[i] = '\0';
     printf("\nCopied String : %s", b);
     return 0;
 }