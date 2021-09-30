/*
 * area.c
 *
 *  Created on: 28 sept 2021
 *      Author: juanm
 */

#include <stdio.h>
#include <stdlib.h>
#include "triangulo_estructura.h"
#include "triangulo.h"
#include "perimetro.h"

float trianguloArea(eTrianguloEscaleno triangulo)
{
	float retorno;

	// lo encontr� como formula valida del area
	retorno = (triangulo.ladoUno+triangulo.ladoDos+triangulo.ladoTres)/2;

	return retorno;
}
