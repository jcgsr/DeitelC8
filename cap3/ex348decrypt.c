// 27.11.2020

#include <stdio.h>

int main(void)
{
   int a, b, c, d;
   int num = 0;

   int flag = 1;

   while (flag == 1)
   {
      printf("Digite uma senha de quatro dígitos (0 não pode ser o 1º): ");
      scanf("%d", &num);

      if (num <= 1000 || num >= 9999)
      {
         printf("Erro. A senha deve possuir 4 dígitos.");
      }
      else
      {
         flag = 2;
      }

      a = ((num / 1000) % 10);
      b = (num / 100) % 10;
      c = (num / 10) % 10;
      d = num % 10;

      int criptA = c;
      int criptB = d;
      int criptC = a;
      int criptD = b;

      int criptAA = (criptA + 10) - 7;
      int criptBB = (criptB + 10) - 7;
      int criptCC = (criptC + 10) - 7;
      int criptDD = (criptD + 10) - 7;

     
      printf("%d %d %d %d\n", criptAA, criptBB, criptCC, criptDD);
   }
}