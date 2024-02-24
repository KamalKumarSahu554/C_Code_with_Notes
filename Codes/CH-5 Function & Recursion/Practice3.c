 //
 #include<stdio.h>
 float force(float mass);

 int main()
 {
     float m;
     printf("Enter a value of mass in kgs : ");
     scanf("%f", &m);
     printf("The value of force in newton is : %.2f", force(m));
     return 0;
 }
 float force(float mass)
 {
     float result = mass * 9.8; 
     return result;
 }