// // print n number of natural numbers
// #include<stdio.h>

// void main() {

//   int i; //Variable definition
//   int num;
//   printf("Enter The n natural number : ");
//   scanf("%d", &num);
//    printf("n number of natural num bers are\n");

//   for (i = 1; i <= num; i++) //Iteration 10 times
//   {
//     printf("%d\t", i); //Print the number.
//   }
// }

// print n number of natural numbers in reverse order
#include<stdio.h>

int main()
{
    int i, num;
    printf("Enter The n natural number : ");
    scanf("%d", &num);
    for (i = num; i; i--) 
    {
        printf("%d\t", i); 
    }
    
    return 0;
}