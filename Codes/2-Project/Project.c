// Snake Water Gun Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SnakeWaterGun(char you, char comp)
{
     // return 1 if you win, -1 if you lose and o if draw
     // For draw condition
     if (you == comp)
     {
          return 0;
     }

     // For win or loss condition
     if (you == 's' && comp == 'g')
     {
          return -1;
     }
     else if (you == 'g' && comp == 's')
     {
          return 1;
     }

     if (you == 's' && comp == 'w')
     {
          return 1;
     }
     else if (you == 'w' && comp == 's')
     {
          return -1;
     }

     if (you == 'g' && comp == 'w')
     {
          return -1;
     }
     else if (you == 'w' && comp == 'g')
     {
          return 1;
     }
}
int main()
{
     char you, comp;
     srand(time(0));
     int number = rand() % 100 + 1;

     if (number < 33)
     {
          comp = 's';
     }
     else if (number > 33 && number < 66)
     {
          comp = 'w';
     }
     else
     {
          comp = 'g';
     }

     printf("\nEnter 's' for snake, 'w' for water and 'g' for gun : ");
     scanf("%c", &you);
     int result = SnakeWaterGun(you, comp);

     if (result == 0)
     {
          printf("\nGame draw!");
     }
     else if (result == 1)
     {
          printf("\nYou win!");
     }
     else
     {
          printf("\nYou lose!");
     }
     printf("\nYou choose %c and computer choose %c", you, comp);
     printf("\n\nThank You!... Plying this game.\n\n");

     return 0;
}