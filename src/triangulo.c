/*
 * triangulo.c
 *
 *  Created on: 28 sept 2021
 *      Author: juanm
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_biblioteca.h"
#include "triangulo_estructura.h"
#include "triangulo.h"


int trianguloCarga(eTrianguloEscaleno* triangulo)
{
	int retorno=-1;

	if(triangulo!=NULL)
	{
		while(retorno==-1)
		{
			if(pedirFloatAUsuario(&triangulo->ladoUno, 0, 100.00, 2, "Por favor ingrese el lado uno: \n", "Error!")==0)
							{
								printf("Se cargo el primer lado\n");
								retorno=0;
							}
							else
							{
								printf("No se pudo cargar el lado\n");
								break;
							}
					if(pedirFloatAUsuario(&triangulo->ladoDos, 0, 100.00, 2, "Por favor ingrese el lado dos: \n", "Error!")==0)
							{
								printf("Se cargo el segundo lado\n");
								retorno=0;
							}
							else
							{
								printf("No se pudo cargar el lado\n");
								break;
							}
					if(pedirFloatAUsuario(&triangulo->ladoTres, 0, 100.00, 2, "Por favor ingrese el lado tres: \n", "Error!")==0)
							{
								printf("Se cargo el tercer lado\n");
								retorno=0;
							}
							else
							{
								printf("No se pudo cargar el lado\n");
								break;
							}
		}
		retorno=0; // solo si se cargan todos los lados bien retornamos 0
	}
	else
	{
		retorno=-1;
	}

	return retorno;
}

void trianguloMostrarPorValor(eTrianguloEscaleno triangulo)
{
    printf("Lado uno: %f\nLado dos: %f\nLado tres: %f\n", triangulo.ladoUno,triangulo.ladoDos,triangulo.ladoTres);
}

void trianguloMostrarPorReferencia(eTrianguloEscaleno* triangulo)
{
    printf("Lado uno: %f\nLado dos: %f\nLado tres: %f\n", triangulo->ladoUno,triangulo->ladoDos,triangulo->ladoTres);
}
