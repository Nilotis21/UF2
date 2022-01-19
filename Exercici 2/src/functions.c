#include <stdio.h>

float validar(){

	float num;

	do{
		printf("Introdueix un nombre:\n");
		scanf("%f", &num);
	} while (num < 0 );

	return num;
}

float dias(float day){

	float number;
	number = day / 86400;

	return number;
}

float horas(float hour){

	float number;
	number = hour / 3600;

	return number;
}

float minutos(float minut){

	float number;
	number = minut / 60;

	return number;
}
