//Find an average of 3 nos. using function
// #include<stdio.h>
// void average();

// int main()
// {
//      average();
//      return 0;
// }
// void average()
// {
//      int a, b, c; 
//      float ave;
//      printf("Enter a num for a : ");
//      scanf("%d", &a);
//      printf("Enter a num for b : ");
//      scanf("%d", &b);
//      printf("Enter a num for c : ");
//      scanf("%d", &c);

//      ave = (float)(a + b + c) / 3;

//      printf("Average of a, b, and c is : %f", ave);
// }

//Hatrry bhai style for above program
#include<stdio.h>
float average(int a, int b, int c);

int main()
{
     int x, y, z;
     printf("Enter a num for a : ");
     scanf("%d", &x);
     printf("Enter a num for b : ");
     scanf("%d", &y);
     printf("Enter a num for c : ");
     scanf("%d", &z);

     printf("The average value is : %f", average(x, y, z));
     
     return 0;
}
float average(int a, int b, int c)
{
     float result;
     result = (float) (a + b + c)/3;
     return result;
}