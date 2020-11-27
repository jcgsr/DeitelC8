// 27.11.2020

#include <stdio.h>

int main(void)
{
   puts("World-Population-Growth Calculator");

   float pop = 79;
   float growth_rate = 0.012;
   float pop_growth = pop * growth_rate;

   int year = 2020;

   printf("Year\tPopulation\tPopulation Growth\n");

   while (year <= 2025)
   {
      printf("%d\t%.2f\t\t%.2f\n", year, pop, pop_growth);
      year++;
      pop += pop_growth;
      pop_growth++;
   }
}