//find pass or fail using if_else
#include<stdio.h>

int main()
{
    int physics, chemestry, math;
    float total;

    printf("Enter Your Physics Mark :\n");
    scanf("%d", &physics);
    printf("Enter Your chemestry Mark :\n");
    scanf("%d", &chemestry);
    printf("Enter Your math Mark :\n");
    scanf("%d", &math);

    total = (physics + chemestry + math) / 3;
    if ((total<40) || physics<33 || chemestry<33 || math<33)
    {
       printf("Your total percentage is %f and you are fail in \n", total);
    }
    else
    {
        printf("Your total percentage is %f and you are pas\n", total);
    }
    
    
    return 0;
}