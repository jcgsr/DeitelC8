// 27.11.2020
// got from the internet

#include <stdio.h>

int main(void)
{

   int a, b, c;

   puts("Digite valores inteiros nao-nulos e positivos.");

   puts("Entre com a medida do lado 1 do triângulo: ");
   scanf("%d", &a);

   puts("Entre com a medida do lado 2 do triângulo: ");
   scanf("%d", &b);

   puts("Entre com a medida do lado 3 do triângulo: ");
   scanf("%d", &c);

   if (a <= 0 || b <= 0 || c <= 0)
   {
      puts("Lados nulos ou negativos nao sao aceitos.");
   }

   if (a >= b + c || b >= c + a || c >= a + b)
   {
      puts("Triângulo inexistente.");
   }

   if (a == b && b == c)
      puts("Triângulo EQUILÁTERO.");

   else if (a == b || b == c || c == a)
      puts("Triângulo ISÓSCELES.");

   else
      puts("Triângulo ESCALENO.");
}