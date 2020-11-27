// 26.11.2020
// Susi dormiu no hospital

#include <stdio.h>

int main(void)
{
   int largest1 = 0;
   int largest2 = 0;
   int counter = 0;
   int number = 0;

   puts("2 Largest Numbers");

   printf("Enter a positive number: ");
   scanf("%d", &number);

   while (counter < 9)
   {
      printf("Enter a positive number: ");
      scanf("%d", &number);

      if (number > largest1)
      {
         largest2 = largest1;
         largest1 = number;
      }
      else if (number > largest2)
      {
         largest2 = number;
      }
      counter++;
   }
   printf("The 2 largest number are %d and %d", largest1, largest2);
}