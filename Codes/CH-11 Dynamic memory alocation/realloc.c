 //
 #include<stdio.h>
 #include<stdlib.h>
 
 int main()
 {
     int *ptr;
     ptr = (int*) malloc(6 * sizeof (int));
     for (int i = 0; i < 6; i++)
     {
          printf("Enter the value of %d eliment : ", i);
          scanf("%d", &ptr[i]);
     }
     for (int i = 0; i < 6; i++)
     {
          printf("\nThe value of %d eliment is : %d", i+1, ptr[i]);
     }
     
     ptr = realloc(ptr, 10*sizeof(int));
     for (int i = 0; i < 10; i++)
     {
          printf("Enter the value of %d eliment : ", i);
          scanf("%d", &ptr[i]);
     }
     for (int i = 0; i < 10; i++)
     {
          printf("\nThe value of %d eliment is : %d", i+1, ptr[i]);
     }
     
     
     return 0;
 }