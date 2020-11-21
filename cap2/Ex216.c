/*
 * =====================================================================================
 *
 *       Filename:  Ex216.c
 *
 *    Description:  Exercício 2.16 
 *
 *        Version:  1.0
 *        Created:  20/11/2020 09:02:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jovane Rocha (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main (void)
{
	int n1;
	int n2;
	int soma;
	int sub;
	int mult;
	int div;
	int mod;

	puts( "Primeiro Exercício" );

	printf( "Primeiro número:" );
	scanf( "%d", &n1 );
	printf( "Segundo número:" );
	scanf( "%d", &n2 );

	puts( "Resultados" );

	soma = n1 + n2;
	sub =  n1 - n2;
	mult = n1 * n2;
	div =  n1 / n2;
	mod = n1 % n2;

	printf( "Soma: %d\n", soma );
	printf( "Subtração: %d\n", sub );
	printf( "Multiplicação: %d\n", mult );
	printf( "Divisão: %d\n", div );
	printf( "Módulo: %d\n", mod);

}

