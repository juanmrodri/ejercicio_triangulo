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

	if(pedirFloatAUsuario(&triangulo->ladoUno, 0, 100.00, 2, "Por favor ingrese el lado uno: \n", "Error!")==0)
		{
			printf("Se cargo el primer lado\n");
		}
		else
		{
			printf("No se pudo cargar el lado\n");
		}
	if(pedirFloatAUsuario(&triangulo->ladoDos, 0, 100.00, 2, "Por favor ingrese el lado dos: \n", "Error!")==0)
			{
				printf("Se cargo el segundo lado\n");
			}
			else
			{
				printf("No se pudo cargar el lado\n");
			}
	if(pedirFloatAUsuario(&triangulo->ladoTres, 0, 100.00, 2, "Por favor ingrese el lado tres: \n", "Error!")==0)
				{
					printf("Se cargo el tercer lado\n");
				}
				else
				{
					printf("No se pudo cargar el lado\n");
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
