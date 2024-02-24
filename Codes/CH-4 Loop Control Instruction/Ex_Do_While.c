//
#include<stdio.h>

int main()
{
    int i = 1, num;
    printf("Enter a No. : ");
    scanf("%d", &num);
    printf("Natural No. of n is \n");
    do
    {
        printf("%d \t", i++);
    } while (i <= num);
    
    return 0;
}