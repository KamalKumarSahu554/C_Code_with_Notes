// //Random Number generation 
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main()
// {
//     int number, guess,  nguessess = 1;
//     srand(time(0));
//     number = rand() %100 + 1; // Generate random numbers between 1 to 100
//     //printf("The random nuber is %d\n", number);

//     // Keep running loop until the number is guessed

//     do
//     {
//         printf("Guess the number beetween 1 t0 100 : ");
//         scanf("%d",&guess);
//         if (guess > number)
//         {
//             printf("Lower number please!\n\n");
//         }
//         else if (guess < number)
//         {
//             printf("Higher number please!\n\n");
//         }
//         else
//         {
//             printf("You are guessed it in %d attemts\n", nguessess);
//         }
//         nguessess++;
        
//     } while (guess != number);
    
//     return 0;
// }
//
#include<stdio.h>

int main()
{
    printf("Hello GOD!");
    return 0;
}