// 26.11.2020 Susi dormiu no hospital

#include <stdio.h>

int main(void)
{
   float hour_rate, extra, salary, extra_salary;
   int hours, init, extra_hours;

   printf("Start program (0 to start)? ");
   scanf("%d", &init);
   while (init != -1)
   {
      printf("Enter # of hours: ");
      scanf("%d", &hours);
      printf("Enter hourly rate ($00.00): ");
      scanf("%f", &hour_rate);

      salary = hours * hour_rate;

      if (hours > 40)
      {
         extra_hours = hours - 40;
         extra_salary = (hour_rate * 0.5) * extra_hours;
         salary += extra_salary;
      }

      printf("Salary is %.2f", salary);

      printf("\nContinue: (-1 to end and 0 to continue): ");
      puts("\n***");
      scanf("\n%d", &init);
   }
}