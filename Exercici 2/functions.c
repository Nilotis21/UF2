#include <stdio.h>

float validar(){

	float num;

	do{
    printf("Introduce un numero de segundos: ");
    scanf("%f",&num);
    } while(num < 0);
	return num;
}

float dias(float num){

    float hour;

        hour = (num / 3600) / 24;

    return hour;
}

float horas(float day){

    float minut;

        minut = (day / 24);

    return minut;
}

float minutos(float hour){

    float sec;

        hour = (hour * 60) / 2;

    return hour -1;
}

float segundos(float minut){

    float sec;

    	while (minut > 60){
        minut = (minut * 60) / 2;
    	}

    return minut;
}
