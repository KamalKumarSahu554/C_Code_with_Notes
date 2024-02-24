// //Arithmatic instruction
// #include<stdio.h>

// int main()
// {
//     float a = 5;
//     float b = 10;
//     printf("The value of a + b is %f\n", a + b);
//     printf("The value of a - b is %f\n", a - b);
//     printf("The value of a * b is %f\n", a * b);
//     printf("The value of a / b is %f\n", a / b);
//     return 0;
// }

//Operator Precedance
// Its not follows Bodomas Rule Absence of paranthesis
// Operator execution order (1st-> *, /, %, 2nd-> +, -, 3rd-> =)
#include<stdio.h>

int main()
{
    float a, b;
    printf("Enter the value ofd a : ");
    scanf("%f", &a);
    printf("Enter the value ofd b : ");
    scanf("%f", &b);

    printf("The value of __ is =  %f\n", 5*a + 7*b);
    printf("The value of __ is =  %f\n", 5/a * 7+b);
    printf("The value of __ is =  %f\n", 5-a + 7*b);
    printf("The value of __ is =  %f\n", 5+a - 7*b);

    return 0;
}