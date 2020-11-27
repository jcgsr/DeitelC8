// 26.11.2020
// Susi dormiu no hospital

#include <stdio.h>

int main(void)
{
   int n;
   int counter = 0;

   puts("Square of Asterisks");

   printf("Enter the size of the square between 1 and 5: ");
   scanf("%d", &n);

   if (n == 1)
   {
      while (counter <= n)
      {
         printf("*");
         printf("\n");
         counter++;
      }
   }
   if (n == 2)
   {
      while (counter < n)
      {
         printf("**");
         printf("\n");
         counter++;
      }
   }
   if (n == 3)
   {
      while (counter < n)
      {
         printf("***");
         printf("\n");
         counter++;
      }
   }
   if (n == 4)
   {
      while (counter < n)
      {
         printf("****");
         printf("\n");
         counter++;
      }
   }

   if (n == 5)
   {
      while (counter < n)
      {
         printf("*****");
         printf("\n");
         counter++;
      }
   }
   else
   {
      printf("Invalid number.");
   }
}