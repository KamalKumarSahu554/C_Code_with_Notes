// Basics of function
#include<stdio.h>
void display(); // Function prototype
int main()
{
     printf("Initializing the Display function\n");
     display(); // Function call
     printf("Display function finished it work\n");
     return 0;
}

// Function defination
void display()
{
     printf("This is Display function\n");
}