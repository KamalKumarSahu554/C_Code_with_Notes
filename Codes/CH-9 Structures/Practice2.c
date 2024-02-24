//
#include<stdio.h>
struct vector
{
     int x, y;
};

struct vector sumVector(struct vector v1, struct vector v2)
{
     struct vector result;
     result.x = v1.x + v2.x;
     result.y = v1.y + v2.y;
     return result; 
};


int main()
{
     struct vector v1, v2, sum;
     v1.x = 34;
     v1.y = 54;
     printf("\nX dim is %d and Y dim is %d for vector v1.\n", v1.x, v1.y);

     v2.x = 3784;
     v2.y = 5478;
     printf("\nX dim is %d and Y dim is %d for vector v2.\n", v2.x, v2.y);

     sum = sumVector(v1, v2);
     printf("\nX dim of result is %d and Y dim of result is %d.\n", sum.x, sum.y);
     return 0;
}