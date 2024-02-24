// Find the largest number
#include <stdio.h>

int main() {

  double num1, num2, num3;

  printf("Enter the num1: ");
  scanf("%lf", &num1);
  printf("Enter the num2: ");
  scanf("%lf", &num2);
  printf("Enter the num3: ");
  scanf("%lf", &num3);


  // if n1 is greater than both n2 and n3, n1 is the largest
  if (num1 >= num2 && num1 >= num3)
    printf("%.2f is the largest number.", num1);

  // if n2 is greater than both n1 and n3, n2 is the largest
  if (num2 >= num1 && num2 >= num3)
    printf("%.2f is the largest number.", num2);

  // if n3 is greater than both n1 and n2, n3 is the largest
  if (num3 >= num1 && num3 >= num2)
    printf("%.2f is the largest number.", num3);

  return 0;
}