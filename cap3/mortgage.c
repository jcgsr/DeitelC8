// 25.11.2020
// not working as expected


#include <stdio.h>

int main(void)
{
   int account_num = 0;
   int mortgage_term;
   int init;
   int year_to_month;

   float mortgage_amount;
   float interest_rate;
   float total_interest;
   float monthly_interest;

   puts("Mortgage Calculator");

   printf("Start program (0 to start)? ");
   scanf("%d", &init);
   while (init != -1)
   {
      printf("Enter account number (-1 to end and 0 to continue): ");
      scanf("%d", &account_num);
      printf("Enter mortgage amount (in US$): ");
      scanf("%f", &mortgage_amount);
      printf("Enter mortgage term (in years): ");
      scanf("%d", &mortgage_term);
      printf("Enter interest rate (as a decimal): ");
      scanf("%f", &interest_rate);

      year_to_month = mortgage_term * 12;
      total_interest = mortgage_amount * interest_rate * year_to_month;      
      monthly_interest = total_interest / year_to_month;

      printf("The monthly payable interest: $ %.2f", monthly_interest);
      printf("\nContinue: (-1 to end and 0 to continue): ");
      puts("\n***");
      scanf("\n%d", &init);
   }
}