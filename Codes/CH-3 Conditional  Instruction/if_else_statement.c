//  //Check the number is even or odd
//  #include<stdio.h>
 
//  int main()
//  {
//     int num;
//     printf("Enter a number : ");
//     scanf("%d", &num);
//     if (num%2 == 0)
//     {
//         printf("%d is even", num);
//     }
//     else
//     {
//         printf("%d is odd", num);
//     }
    
//     return 0;
//  }
//  //--------------------------------------------------------------

//Logical operators
 #include<stdio.h>
 
 int main()
 {
    int age;
    printf("Enter Your age : ");
    scanf("%d", &age);
    if (age<=80 && age>=18)    
    {
        printf("You can drive");
    }
    else
    {
        printf("You are below 18 and above 80, You Can't Drive");
    } 
    
    
    
    return 0;
 }