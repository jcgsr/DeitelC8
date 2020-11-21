/*
 * =====================================================================================
 *
 *       Filename:  fig25.c
 *
 *    Description: Figura 25 Deitel 8 
 *
 *        Version:  1.0
 *        Created:  20/11/2020 08:45:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jovane Rocha (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>


#include	<stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
		  int main ( void )
{
		 int n1;
		 int n2;

		 printf( "Primeiro número: \n" );
		 scanf( "%d", &n1 );

		 printf( "Segundo número 2: \n" );
		 scanf( "%d", &n2 );

		 int soma;
		 soma = n1 + n2;

		 printf( "A soma de %d com %d é %d", n1, n2, soma );
}				/* ----------  end of function main  ---------- */

