// 25.11.2020
// not working as expected

#include <stdio.h>

int main(void)
{
   char month[10];
   float sales;
   float collected;
   float county_tax = 0.05;
   float state_tax = 0.04;
   float county_sale;
   float state_sale;
   float total_sale_tax;
   

   puts("Sales Taxes");

   printf("Enter total amount collected (-1 to quit): ");
   scanf("%f", &collected);

   while (collected != -1)
   {
      county_sale = collected * county_tax;
      state_sale = collected * state_tax;
      total_sale_tax = county_sale + state_sale;
      sales = collected - total_sale_tax;

      printf("Enter name of month: ");
      scanf("%s", month);

      printf("Total Collections: $ %.2f in %s", collected, month);
      printf("\nCounty Sales Tax: $ %.2f", county_sale);
      printf("\nState Sales Tax: $ %.2f", state_sale);
      printf("\nTotal Sales Tax: $ %.2f", total_sale_tax);
      printf("\nSales: $ %.2f\n", sales);
      puts("*****");

      printf("Enter total amount collected (-1 to quit): ");
      scanf("%f", &collected);
   }
}