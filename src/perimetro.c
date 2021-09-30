/*
 * perimetro.c
 *
 *  Created on: 28 sept 2021
 *      Author: juanm
 */

#include <stdio.h>
#include <stdlib.h>
#include "triangulo_estructura.h"
#include "triangulo.h"
#include "perimetro.h"


float trianguloPerimetro(eTrianguloEscaleno triangulo)
{
	float retorno;

	retorno = triangulo.ladoUno+triangulo.ladoDos+triangulo.ladoTres;

	return retorno;
}
