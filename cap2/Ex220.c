// 21.11.2020 Aniversário da minha filha, DIANA!!!
#include <stdio.h>

int main(void)
{
   int tempo;
   int segundos;
   int horas;
   int minutos;
   puts("Converter Segundos: ");

   printf("Informe os segundos: ");   
   scanf("%d", &tempo);

   horas = tempo / 3600;
   minutos = (tempo - (horas * 3600)) / 60;
   segundos = tempo % 60;

   printf("\nA conversão de %d segundos é %.2d:%.2d:%.2d", tempo, horas, minutos, segundos);
}
