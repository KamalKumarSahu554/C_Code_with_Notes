// How do you calculate a factorial?
//In more mathematical terms, 
//the factorial of a number (n!) is equal to n(n-1).
// For example, if you want to calculate the factorial for four,
// you would write: 4! = 4 x 3 x 2 x 1 = 24.

// //Find the Factoraial of n numbers using for loop
// #include<stdio.h>

// int main()
// {
//     int n, i = 1 , factorial = 1;
//     printf("Enter the value of n : ");
//     scanf("%d", &n);

//     for(i; i<=n; i++)
//     {
//         factorial *= i;
//     }
//     printf("Factorial of %d is = %d", n, factorial);
     
//     return 0;
// }
//--------------------------------------------------------------------

//Find the Factoraial of n numbers using while loop
#include<stdio.h>

int main()
{
    int n, i = 1 , factorial = 1;
    printf("Enter the value of n : ");
    scanf("%d", &n);
   
    while (i<=n)
    {
       factorial *= i;
       i++;

    }
    printf("Factorial of %d is : %d", n, factorial);
    
    
    
    return 0;
}