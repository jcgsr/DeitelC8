// 27.11.2020

#include <stdio.h>

int main (void)
{
   int factorial = 1;
   int i = 1;
   int num;

   puts("Factorial");

   printf("Enter a number: ");
   scanf("%d", &num);

   while (i <= num)
   {
      factorial *= i;
      i++;
   }
   printf("The factorial of %d is %d", num, factorial);
   
}