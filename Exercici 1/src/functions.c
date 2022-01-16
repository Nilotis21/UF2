#include <stdio.h>

int validar(){

	int number, aux = 3;

	do{
		printf("Introdueix un nombre [10-5000]:\n");
		scanf("%d", &number);
		aux = aux - 1;
	} while ((number < 10 || number > 5000) && aux > 0);

	if(aux <= 0){
		return 0;
	} else {
		return number;
	}
}
