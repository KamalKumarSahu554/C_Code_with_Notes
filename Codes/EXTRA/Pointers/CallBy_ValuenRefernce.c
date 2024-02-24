// //Example of Call by value 
// #include<stdio.h>
// void value(int);

// int main()
// {
//      int a;
//      printf("Emter a number : ");
//      scanf("%d", &a);
//      printf("\nValue before function call : %d", a);

//      value(a);

//      printf("\nValue after function call : %d", a);
//      return 0;
// }

// void value(int x)
// {
//      x = x+ 10;
//      printf("\nValue of a is : %d", x);
// }

//Example of Call by reference 
#include<stdio.h>
void value(int *);

int main()
{
     int a, *p;
     printf("Emter a number : ");
     scanf("%d", &a);
     printf("\nValue before function call : %d", a);
     p = &a;

     value(p);

     printf("\nValue after function call : %d", a);
     return 0;
}

void value(int *p)
{
     *p = *p+ 10;
     printf("\nValue of a is : %d", *p);
}
