// 26.11.2020
// Susi dormiu no hospital

#include <stdio.h>

int main(void)
{
   int counter = 0;
   int number = 0;
   int largest = 0;

   puts("Largest Number");
   printf("Enter a positive number: ");
   scanf("%d", &number);

   while (counter < 9)
   {
      printf("Enter a positive number: ");
      scanf("%d", &number);

      if (counter == 0)
      {
         largest == number;
      }
      if (number > largest)
      {
         largest = number;
      }
      counter++;
   }
   printf("Largest number is %d", largest);
}