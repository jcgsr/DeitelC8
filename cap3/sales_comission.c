// 25.11.2020

#include <stdio.h>

int main(void)
{
   puts("Sales Comission Calculator");

   float salary_week = 200;
   float percent_plus = 0.09;
   float sales;
   float salary;

   int init;

   printf("Start program (0 to start)? ");
   scanf("%d", &init);
   while (init != -1)
   {
      printf("Enter sales in US$: ");
      scanf("%f", &sales);
      salary = salary_week + sales * percent_plus;

      printf("Salary is %.2f\n", salary);
      printf("\nContinue: (-1 to end and 0 to continue): ");
      puts("\n***");
      scanf("\n%d", &init);
   }
}
