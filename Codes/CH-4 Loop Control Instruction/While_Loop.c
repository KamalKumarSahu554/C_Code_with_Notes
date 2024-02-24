// //While_Loop
// #include<stdio.h>

// int main()
// {
//     int num;
//     printf("Enter a number : ");
//     scanf("%d", &num);

//     while (num<=10)
//     {
//         printf("%d\n", num);
//         num++;
//     }
    
//     return 0;
// }
// //-----------------------------------------------

//Print natural numbers from 10 to 20 when initial loop counter i is initialized to 0.
#include<stdio.h>

int main()
{
    float i = 0;
    while (i<=20)
    {
        if (i>=10)
        {
            printf("the valule of i is : %.2f\n", i); 
            // %.2f is print 2 digit number after decimal(.)   
        }
        i++;
    }
    
    return 0;
}
