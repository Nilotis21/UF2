#include <stdio.h>
#include "functions.h"

void modifyData(struct biblio *b, int size) { //punter a office

	for (int i = 0; i < size; i++) {

		//títol
		printf(MSG2);
		scanf("%s", b[i].title);

		//autor
		printf(MSG3);
		scanf("%s", b[i].autor);

		//editorial
		printf(MSG4);
		scanf("%s", b[i].editorial);

		//unitats
		printf(MSG5);
		scanf("%d", &b[i].units);

		//dia
		printf(MSG6);
		scanf("%d", &b[i].time.day);

		//mes
		printf(MSG7);
		scanf("%d", &b[i].time.month);

		//any
		printf(MSG8);
		scanf("%d", &b[i].time.year);

		//nom
		printf(MSG9);
		scanf("%s", b[i].user.name);

		//prèstec
		printf(MSG10);
		scanf("%d", &b[i].user.time);
	}
}

void printData(struct biblio *b, int size) {

	printf(MSG11);
	printf(MSG12);
	for (int i = 0; i < size; i++) {

		printf(MSG13, i + 1, b[i].title, b[i].autor, b[i].editorial, b[i].units,
				b[i].time.day, b[i].time.month, b[i].time.year, b[i].user.name,
				b[i].user.time);
	}
}
