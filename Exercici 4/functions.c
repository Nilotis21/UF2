#include <stdio.h>

int validar() {

	int num;

	do {
		printf("Introdueix una nota [1-10]:\n");
		scanf("%d", &num);
	} while (num < 0 || num > 10);

	return num;
}

int aprovados(int num) {

	int i = 0;
	if (num > 4) {
		i++;
	}
	return i;
}

int suspensos(int num) {

	int i = 0;
	if (num < 5) {
		i++;
	}
	return i;
}

int avgap(int num) {

	int i = 0;
	if (num < 5) {
		i += num;
	}
	return i;
}

int avgsu(int num) {

	int i = 0;
	if (num < 5) {
		i += num;
	}
	return i;
}
