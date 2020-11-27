// 26.11.2020
// Susi dormiu no hospital

#include <stdio.h>

int main (void)
{
   int counter = 1;
   int number = 7;
   puts("Tabular Output");

   printf("A\tA+3\tA+6\tAx9\n\n");

   while (counter <= 5)
   {
      printf("%d\t%d\t%d\t%d\n", number, number + 3, number + 6, number * 9);
      counter++;
      number += 7;
   }
   
}