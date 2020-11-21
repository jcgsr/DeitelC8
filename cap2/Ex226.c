// 21.11.2020 Aniversário da minha filha, DIANA!!!
// Ela caiu da cama essa madrugada... Susi dormiu no hospital.
// Diana vai ganhar uma biclicleta da Frozen :)))

#include <stdio.h>

int main(void)
{
   int n1, n2;
   puts("Múltiplos");

   printf("Primeiro número: ");
   scanf("%d", &n1);

   printf("Segundo número: ");
   scanf("%d", &n2);

   if (n1 % n2 == 0 || n2 % n1 == 0)
   {
      printf("%d e %d são múltiplos", n1, n2);
   }
   else
   {
      printf("%d e %d não são múltiplos", n1, n2);
   }
   
   
}