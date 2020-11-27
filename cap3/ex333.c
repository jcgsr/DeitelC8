// 26.11.2020

#include <stdio.h>

int main(void)
{
   int n;

   puts("Square of Asterisks");

   printf("Enter the size of the square between 1 and 5: ");
   scanf("%d", &n);

   if (n == 1)
   {
      printf("*");
      printf("\n");
   }
   if (n == 2)
   {
      printf("**\n");
      printf("**\n");      
   }
   if (n == 3)
   {
      printf("***\n");
      printf("* *\n");
      printf("***\n");
   }
   if (n == 4)
   {
      printf("****\n");
      printf("*  *\n");
      printf("*  *\n");
      printf("****\n");
      printf("\n");
   }

   if (n == 5)
   {
      printf("*****\n");
      printf("*   *\n");
      printf("*   *\n");
      printf("*   *\n");
      printf("*****\n");
      printf("\n");
   }
}