// 21.11.2020 Aniversário da minha filha, DIANA!!!
// Ela caiu da cama essa madrugada... Susi dormiu no hospital.
// Diana vai ganhar uma biclicleta da Frozen :)))

#include <stdio.h>

int main(void)
{  
   float altura;
   float peso;
   float imc;

   puts("IMC");

   printf("Altura: ");
   scanf("%f", &altura);

   printf("Peso: ");
   scanf("%f", &peso);

   imc = peso / (altura * altura);

   printf("\nSeu IMC é %.2f", imc);

   puts("\nValores IMC");
   printf("Abaixo do peso: menos que 18.5");
   printf("\nNormal: \tentre 18.5 e 24.9");
   printf("\nAcima do peso: \tentre 25 e 29.9");
   printf("\nObeso: \t\t30 ou mais");
}