/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

nombre: Rodriguez Juan Manuel

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "utn_biblioteca.h"
#include "triangulo_estructura.h"
#include "triangulo.h"
#include "perimetro.h"
#include "area.h"



int main()
{
    setbuf(stdout, NULL);
    eTrianguloEscaleno triangulo;

    trianguloCarga(&triangulo);
    trianguloMostrarPorValor(triangulo);
    trianguloMostrarPorReferencia(&triangulo);
    trianguloPerimetro(triangulo);
    trianguloArea(triangulo);

    return EXIT_SUCCESS;

}




