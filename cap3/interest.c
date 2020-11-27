// 26.11.2020 Susi dormiu no hospital

#include <stdio.h>

int main(void)
{
   float interest, principal, rate;
   int days, init;

   printf("Start program (0 to start)? ");
   scanf("%d", &init);
   while (init != -1)
   {
      printf("Enter loan principal: ");
      scanf("%f", &principal);
      printf("Enter rate: ");
      scanf("%f", &rate);
      printf("Enter term (days): ");
      scanf("%d", &days);

      interest = principal * rate * days / 365;

      printf("The interest charge is: $%.2f", interest);

      printf("\nContinue: (-1 to end and 0 to continue): ");
      puts("\n***");
      scanf("\n%d", &init);
   }
}