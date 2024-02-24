//Linear search/ Sequencial search
#include<stdio.h>

int main()
{
     int a[10], flag = 0, key, pos;

     for (int i = 0; i < 10; i++)
     {
          printf("Enter Number %d : ", i+1);
          scanf("%d", &a[i]);
     }
     printf("\nEnter number to search : ");
     scanf("%d", &key);

for (int i = 0; i < 10; i++)
{
     if (a[i] == key)
     {
          pos = i+1;
          flag = 1;
          break;
     }
}
     if (flag == 1)
     {
          printf("\nNumber found at %d posision", pos);        
     }
     else
     {
          printf("\nNumber not found"); 
     }

     
     return 0;
}