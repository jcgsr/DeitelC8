/*
 * =====================================================================================
 *
 *       Filename:  Ex217.c
 *
 *    Description: Exercício 2.18
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
	int rainfallhighest;
	int rainfallcurrent;
	
	puts("Hihgest Rainfall");

	printf("Hihgest Rainfall ever: ");
	scanf("%d", &rainfallhighest);
	printf("Current year's highest rainfall: ");
	scanf("%d", &rainfallcurrent);

	if (rainfallcurrent > rainfallhighest)
	{
		/* code */puts("New highest rainfall ever!");
		rainfallhighest = rainfallcurrent;
	} else
	{
		puts("The oldest highest rainfall continues...");
	}
	
	
	
}
