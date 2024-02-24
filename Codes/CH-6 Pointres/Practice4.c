//
#include<stdio.h>

void SumAndAvg(int a, int b, int *sum, float *avg)
{
     *sum = a + b;
     *avg = (float)(*sum)/2;
}

int main()
{
     int i, j, sum;
     float avg;
     printf("enter the value of i : ");
     scanf("%d", &i);
     printf("enter the value of j : ");
     scanf("%d", &j);

     SumAndAvg(i, j, &sum, &avg);
     printf("the value sum : %d\n", sum);
     printf("the value avg : %.2f\n", avg);
     return 0;
}