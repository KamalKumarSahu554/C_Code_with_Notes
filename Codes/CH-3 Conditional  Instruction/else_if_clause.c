//Use of else if
#include<stdio.h>

int main()
{
    int num;
    printf("Enter yor number : ");
    scanf("%d", &num);

    if (num>=0 && num<=10)
    {
        printf("Your number is Between 0 to 10\n");
    }

    else if (num>=10 && num<=20)
    {
        printf("Your number is Between 10 to 20\n");
    }
    else if (num>=20 && num<=30)
    {
        printf("Your number is Between 20 to 30\n");
    }
    else if (num>=30 && num<=40)
    {
        printf("Your number is Between 30 to 40\n");
    }
    else if (num>=40 && num<=50)
    {
        printf("Your number is Between 40 to 50\n");
    }
    
    else
    {
        printf("Your number is uot of 50\n");
    }
    
    return 0;
}