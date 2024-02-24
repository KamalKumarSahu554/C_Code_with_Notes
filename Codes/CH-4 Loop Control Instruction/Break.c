// //Break statement using do while loop
// #include<stdio.h>

// int main()
// {
//     int i = 0;
//     do
//     {
//         printf("The Value of i is : %d\n", i + 1);
//         i++;
//         if (i == 5)
//         {
//             break;
//         }
        
//     } while (i<=10);
    
//     return 0;
// }

//Break statement using do while loop
#include<stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("print the value of i : %d\n", i);
       
        if (i == 6)
        {
           break;
        }
        
    }
    
    return 0;
}