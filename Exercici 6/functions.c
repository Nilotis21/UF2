#include <stdio.h>
#include "functions.h"

int validar(char *msg){

	int num;
	do{
		printf("%s", msg);
		scanf("%d", &num);
	} while (num < 1);

	return num;
}

int calc(int num) {

	int aux = 0, i = 0, aux2 = 0;

	for (i = 1; i < num; i++){
		aux += i;
		if (aux < num){
			printf("%d ", i);
			aux2 += i;
		}
	}
	return aux2;
}


