// 27.11.2020

#include <stdio.h>

int main (void)
{
   int counter = 500;
   int n = 1;

   while (n <= counter) 
   {
      printf("$ ");
      if (n % 50 == 0)
      {
         printf("\n");
      }
      n++;
   }
}