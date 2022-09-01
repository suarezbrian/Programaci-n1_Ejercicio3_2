/*
 ============================================================================
 Name        : Ejercicio3_2.c
 Author      : Brian Alan Suarez
 Version     : Ejercicio 3_2 (Funciones)
 Copyright   : Your copyright notice
 Description : Crear una función que pida el ingreso de un flotante y lo retorne.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float returnNumero();

int main() {
	setbuf(stdout, NULL);

	printf("El numero ingresado es : %f", returnNumero());

	return 0;
}

float returnNumero()
{
	float numero;

	printf("Ingrese un numero : ");
	scanf("%f", &numero);

	return numero;
}
