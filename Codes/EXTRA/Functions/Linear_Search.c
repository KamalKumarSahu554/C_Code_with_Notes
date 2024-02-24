// Linear search/ Sequencial search
#include <stdio.h>
void search(int a[],int key, int size);

int main()
{

     int a[50], size, key;
     printf("Enter the size of array : ");
     scanf("%d", &size);

     for (int i = 0; i < size; i++)
     {
          printf("Enter Number %d : ", i + 1);
          scanf("%d", &a[i]);
     }

     printf("\nEnter number to search : ");
     scanf("%d", &key);
     search(a, key, size);

     return 0;
}
 
void search(int a[], int key, int size)
{
     int pos, flag = 0;

     for (int i = 0; i < size; i++)
     {
          if (a[i] == key)
          {
               pos = i + 1;
               flag = 1;
               break;
          }
     }
     if (flag == 1)
     {
          printf("\nNumber %d is found at %d posision", key, pos);
     }
     else
     {
          printf("\nNumber not found");
     }
}