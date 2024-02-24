// Not completed
#include<stdio.h>

void display();

int main()
{
     int row = 2, column = 3;

     int MAT[2][3];
     for (int i = 0; i < row; i++)
     {
          for (int j = 0; j < column; j++)
          {
               printf("Enter the mark of ROW %d in COLUMN %d : ",i+1, j+1);
               scanf("%d", &MAT[i][j]);
          }
     }

     return 0;
}