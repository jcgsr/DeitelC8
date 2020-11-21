// 21.11.2020 Aniversário da minha filha, DIANA!!!
// Ela caiu da cama essa madrugada... Susi dormiu no hospital.
// Diana vai ganhar uma biclicleta da Frozen :)))

#include <stdio.h>

int main (void) 
{

   float km, gas, kmL, custoGas;
   float estacionamento, pedagio, custoTotal;

   puts("Faixa Solidária");

   printf("Km por dia: ");
   scanf("%f", &km);

   printf("Preço da gasolina: ");
   scanf("%f", &gas);

   printf("Km por litro: ");
   scanf("%f", &kmL);

   custoGas = (km / kmL) * gas;

   printf("Estacionamento: ");
   scanf("%f", &estacionamento);

   printf("Pedágio: ");
   scanf("%f", &pedagio);

   custoTotal = custoGas + estacionamento + pedagio;

   puts("Custo por dia: ");
   printf("R$%.2f", custoTotal);
}