#include <stdio.h>
#include "functions.h"

void main() {

	float num, day, hour, minut;

	num = validar();
	day = num;
	hour = num;
	minut = num;
	printf("Aixo són: %.2f dies, %.2f hores, %.2f minuts i %.0f segons."
			, dias(day), horas(hour), minutos(minut), num);

}
