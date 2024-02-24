//
#include<stdio.h>
struct vector
{
     int x, y;
};


int main()
{
     struct vector v1, v2;
     v1.x = 34;
     v1.y = 54;
     printf("\nX dim is %d and Y dim is %d for vector v1.\n", v1.x, v1.y);

     v2.x = 3784;
     v2.y = 5478;
     printf("\nX dim is %d and Y dim is %d for vector v2.\n", v2.x, v2.y);

     return 0;
}