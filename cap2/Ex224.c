// 21.11.2020 Aniversário da minha filha, DIANA!!!
// Ela caiu da cama essa madrugada... Susi dormiu no hospital.
// Diana vai ganhar uma biclicleta da Frozen :)))
#include <stdio.h>
int main (void) 
{
   int n;
   puts("Par ou Ímpar");

   printf("Informe o número: ");
   scanf("%d", &n);

   if (n % 2 == 0)
   {
      printf("%d é PAR!", n);
   }
   else
   {
      printf("%d é ÍMPAR", n);
   }
   
   

}