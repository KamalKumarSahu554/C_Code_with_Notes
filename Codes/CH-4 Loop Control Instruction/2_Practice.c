//Sum of n natural numbers 
#include<stdio.h>

int main()
{
    int i = 1 , sum = 0, n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    for(i; i<=n; i++)
    {
        sum += i;
    }
    printf("The value of sum (1 to %d) is %d", n, sum);
     
    return 0;
}