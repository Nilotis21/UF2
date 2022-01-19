#include <stdio.h>
#include "functions.h"

void main(){

    float num, day, hour, minut, sec;

    //num = validar();
    num = 350000;
    day = dias(num);
    hour = (day * 10) - (day / 10);
    hour = horas(day);
    minut = minutos(hour);
    sec = segundos(minut);

    printf("Aixo són: %.0f dies, %.0f hores, %.0f minuts i %.0f segons.", day, hour, minut, sec);
}
