//There is some operator in c for increament and decreament 
// i++ mean first put the value of i then increament of it
// ++i mean first increament then put the value of i
// Same as for decreament (i-- and --i)
#include<stdio.h>

int main()
{
    int i;
    printf("Enter the value of i : ");
    scanf("%d", &i);

    // printf("The value of i is : %d\n", i++); // First print i 
    // printf("Increamented value : %d\n", i); // and increament it

    printf("The value of i is : %d\n", ++i); // First increament i
    printf("Increamented value : %d\n", i); // and print it

    // Same as for decreament (i-- and --i)

    return 0;
}