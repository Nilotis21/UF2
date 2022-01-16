#include <stdio.h>

void main() {

	int num;

	num = validar();

	if (num == 0){
		printf("Error!");
	} else {
		printf("Has introduït un %d.", num);
	}
}

