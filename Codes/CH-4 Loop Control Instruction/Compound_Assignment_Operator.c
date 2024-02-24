//In C There is some Compound operator
// These are +=, -=, *=, /= & %=
//Example i++ is i = i+1(increament by 1) 
//and i+=10 is i = i+10(increament by 10)
#include<stdio.h>

int main()
{
    int i;
    printf("Enter the value for i : ");
    scanf("%d",&i);
    printf("The value of i is : %d\n", i+=10); //i value increament by 10

    printf("Enter the value for i : ");
    scanf("%d",&i);
    printf("The value of i is : %d\n", i-=10); //i value decreament by 10
    
    printf("Enter the value for i : ");
    scanf("%d",&i);
    printf("The value of i is : %d\n", i*=10); //i value multiply by 10
    
    printf("Enter the value for i : ");
    scanf("%d",&i);
    printf("The value of i is : %d\n", i/=10); //i value division by 10
    return 0;

}