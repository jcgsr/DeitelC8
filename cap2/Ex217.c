/*
 * =====================================================================================
 *
 *       Filename:  Ex217.c
 *
 *    Description: Exercício 2.17
 *
 *
 *        Version:  1.0
 *        Created:  20/11/2020 09:24:24
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
	int u;
	int a;
	int t;
	int v;
	int s;
	puts("Velocidade Final");

	printf("Velocidade inicial: ");
	scanf("%d", &u);
	printf("Aceleração: ");
	scanf("%d", &a);
	printf("Tempo: ");
	scanf("%d", &t);

	v = u + a * t;
	s = (u * t) + (1 / 2 * a * t * t);

	printf("Velocidade final: %d\n", v);
	printf("Distância: %d\n", s);
}
