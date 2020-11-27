// 27.11.2020

#include <stdio.h>

int main (void)
{
   float radius;
   float pi = 3.14159;
   puts("Circle");
   printf("Enter the radius: ");
   scanf("%f", &radius);

   printf("The diameter is %.2f", 2 * radius);
   printf("\nThe circumference is %.2f", 2 * radius * pi);
   printf("\nThe area is %.2f", pi * radius * radius);
}