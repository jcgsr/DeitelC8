/*
 * =====================================================================================
 *
 *       Filename:  Ex217.c
 *
 *    Description: Exercício 2.19 - Minha filha, Diana, caiu da cama nessa madrugada
 *                 enquanto eu fazia esse exercício :(( Susi dormiu no hospital
 *
 *
 *        Version:  1.0
 *        Created:  20/11/2020 09:24:24
 *       Finished:  21/11/2020 07:20:44
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jovane Rocha (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(void)
{
   int n1;
   int n2;
   int n3;

	puts("Exercício 2.19");

	printf("Primeiro inteiro: ");
   scanf("%d", &n1);

   printf("Segundo inteiro: ");
   scanf("%d", &n2);

   printf("Terceiro inteiro: ");
   scanf("%d", &n3);   

   int soma = n1 + n2 + n3;
   int media = (n1 + n2 + n3) / 3;
   int prod = n1 * n2 * n3;

   printf("A soma é %d\n", soma);
   printf("A média é %d\n", media);
   printf("O produto é %d\n", prod);

   // O maior
   if (n1 > n2 && n1 > n3)
   {
      printf("O maior número é %d", n1);
   }
    if (n2 > n1 && n2 > n3)
   {
      printf("O maior número é %d", n2);
   }
    if (n3 > n2 && n3 > n1)
   {
      printf("O maior número é %d", n3);
   }

   // O menor
   if (n1 < n2 && n1 < n3)
   {
      printf("\nO menor número é %d", n1);
   }
    if (n2 < n1 && n2 < n3)
   {
      printf("\nO menor número é %d", n2);
   }
    if (n3 < n2 && n3 < n1)
   {
      printf("\nO menor número é %d", n3);
   }


}
