#include <stdio.h>
#include "functions.h"

int main() {

	int num, final;

	num = validar();
	//aux = num;
	//i = contar(num);
	final = convertir(num);
	printf("%d", final);
	//printf("El nombre introduït és %d en binari.", convertir(aux));
}

