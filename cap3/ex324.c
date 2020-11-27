// 26.11.2020
// Susi dormiu no hospital

#include <stdio.h>

int main (void)
{
   int counter = 1;
   int number = 1;
   puts("Tabular Output");

   printf("N\tN²\tN³\tN⁴\n\n");

   while (counter <= 10)
   {
      printf("%d\t%d\t%d\t%d\n", number, number * number, number * number * number, number * number * number* number );
      counter++;
      number++;
   }
   
}