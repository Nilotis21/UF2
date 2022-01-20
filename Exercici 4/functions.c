#include <stdio.h>

int validar() {

	int num;

	do {
		printf("Introdueix una nota [1-10]:\n");
		scanf("%d", &num);
	} while (num < 0 || num > 10);

	return num;
}

int calc_not(int num) {

	int i = 0;
	if (num < 5) {
		i++;
	}
	return i;
}

float avg_note(int num, int) {

	int i = 0, j = 0, number = 0;
	if (num < 5) {
    number = num + number;
		i++;
	} else {
    number = num + number;
		j++;
  }
	return number;
}
