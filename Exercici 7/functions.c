#include <stdio.h>
#include "functions.h"

int validar(char *msg){

	int num;
	do{
		printf("%s", msg);
		scanf("%d", &num);
	} while (num < 1 || num > 50);

	return num;
}

int validar2(char *msg){

	int num;
	do{
		printf("%s", msg);
		scanf("%d", &num);
	} while (num < 1 || num > 10);

	return num;
}

void omplir(int *num, int size){

	int i;

	for (i = 0; i < size; i++){
		num[i] = validar2(MSG2);
	}
}

int mitjana(int *num, int size){

	int i, j = 0;

	for (i = 0; i < size; i++){
		j += num[i];
	}
	return j / size;
}

int max(int *num, int size){

	int i, j = 0;

	for (i = 0; i < size; i++){
		if(num [i] > j){
			j = num[i];
		}
	}
	return j;
}

int min(int *num, int size){

	int i = 0, j = 1;

	j = num[i];
	for (i = 0; i < size; i++){
		if(j > num[i]){
			j = num[i];
		}
	}
	return j;
}
