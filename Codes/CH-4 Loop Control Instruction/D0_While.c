//
#include<stdio.h>

int main()
{
    int i = 0;
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    do
    {
        
       printf("the valule of i is : %d\n", i + 1); 
        i++;
    } while (i<num);
    
    return 0;
}