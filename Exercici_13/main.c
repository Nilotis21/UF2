/*
 * Dissenya un programa que demani:
 quants valors vol generar automàticament
 entre quin rang els vol generar
 mostri un menú amb les segúents opcions:
 ordenar aquests valors de manera ascendent
 ordenar aquests valors de manera descendent
 cercar un valor introduït per teclat
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

void main() {

	int size, i, inic, final, aux, aux2, trobat;
	size = valint(MSG, 1, NULL);

	inic = valint(MSG2, NULL, NULL);

	final = valint(MSG3, inic, NULL);

	int num[size];

	omplir(num, size, inic, final);

	printf(MSG4);

	aux = valint(MSG5, 1, 4);

	switch (aux) {

	case 1:
		order_asc(num, size);
		mostrar(num,size);
		break;

	case 2:
		order_des(num, size);
		mostrar(num,size);
		break;

	case 3:

		printf(MSG6);
		scanf("%d", &aux2);
		trobat = cercar(num, size, aux2);
		if (trobat == 1) {
			printf(MSG7);
		} else {
			printf(MSG8);
		}
		break;
	case 4:
		break;
	}
}
