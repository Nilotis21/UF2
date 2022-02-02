#include <stdio.h>
#include "functions.h"

void main() {

	int size;

	do {
		printf(MSG);
		scanf("%d", &size);
	} while (size < 1);

	struct biblio book[size];

	modifyData(book, size);
	printData(book, size);

}
