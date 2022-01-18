#include <stdio.h>

void main() {

	float num;// day, hour, minut;

	num = validar();
	/*day = dias(num);
	hour = horas(num);
	minut = minutos(num);
	printf("Aixo són: %.2f dies, %.2f hores, %.2f minuts i %.0f segons.", day, hour, minut, num);
	*/
	printf("Aixo són: %f dies, %f hores, %f minuts i %.0f segons."
			, dias(num), horas(num), minutos(num), num);

}

