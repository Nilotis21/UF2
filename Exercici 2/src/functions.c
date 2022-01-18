#include <stdio.h>

float validar(){

	float num;

	do{
		printf("Introdueix un nombre:\n");
		scanf("%.2f", &num);
	} while (num < 0 );

	return 2;
}

float dias(float num){

	float number;
	number = num / 86400;

	return number;
}

float horas(float num){

	float number;
	number = num / 3600;

	return number;
}

float minutos(float num){

	float number;
	number = num / 60;

	return number;
}
