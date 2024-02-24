//Random Number generation 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number;
    srand(time(0));
    number = rand() %100 + 1; // Generate random numbers between 1 to 100
    printf("The random nuber is %d", number);
    return 0;
}