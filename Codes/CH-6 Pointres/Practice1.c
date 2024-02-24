 //
 #include<stdio.h>
 
 int main()
 {
     int *ptr, a = 5;
     ptr = &a;

     printf("Value of a is : %d\n", a);
     printf("Address of a is : %u\n", ptr);
     printf("Value of a is : %d\n", *ptr);
     printf("Address of ptr is : %u\n", &ptr);
     

     return 0;
 }