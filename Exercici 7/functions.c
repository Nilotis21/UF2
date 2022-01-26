#include <stdio.h>
#include "functions.h"

float validar(char *msg){

	float num;
	do{
		printf("%s", msg);
		scanf("%f", &num);
	} while (num < 1 || num > 50);

	return num;
}

float validar2(char *msg){

	float num;
	do{
		printf("%s", msg);
		scanf("%f", &num);
	} while (num < 1 || num > 10);

	return num;
}

void omplir(float *num, int size){

	int i;

	for (i = 0; i < size; i++){
		num[i] = validar2(MSG2);
	}
}

float mitjana(float *num, int size){

	int i;
	float j = 0;

	for (i = 0; i < size; i++){
		j += num[i];
	}
	return j / size;
}

float max(float *num, int size){

	int i;
	float j = 0;

	for (i = 0; i < size; i++){
		if(num[i] > j){
			j = num[i];
		}
	}
	return j;
}

float min(float *num, int size){

	int i = 0;
	float j = 1;

	j = num[i];
	for (i = 0; i < size; i++){
		if(j > num[i]){
			j = num[i];
		}
	}
	return j;
}
