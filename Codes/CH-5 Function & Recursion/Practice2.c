// // Celsius to fahrenheit
// #include<stdio.h>

// int main()
// {
//      float num;
//      float fah;
//      printf("Enter celsius : ");
//      scanf("%f",&num);
//      fah = (num*1.8) + 32;
//      printf("Fahrenheit is : %f", fah);
//      return 0;
// }

 // Celsius to fahrenheit using Function
 #include<stdio.h>
 float tempetarute(float num);

 int main()
 {
     float num;
     printf("Enter celsius : ");
     scanf("%f",&num);
     //printf("Fahrenheit is : %f", tempetarute(num));
     tempetarute(num);
     return 0;
 }
 float tempetarute(float num)
 {
     
     float fah;
     fah = (num*1.8) + 32;
     printf("Fahrenheit is : %f", fah);
     return fah;
 }