#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#define MSG "Quants registres introduïras:\n"
#define MSG2 "\nIntrodueix el nom del llibre:\n"
#define MSG3 "Introdueix l'autor del llibre:\n"
#define MSG4 "Introdueix l'editorial del llibre:\n"
#define MSG5 "Introdueix quantes unitas disponibles del llibre n'hi ha:\n"
#define MSG6 "Introdueix el día de publicació del llibre:\n"
#define MSG7 "Introdueix el mes de publicació del llibre:\n"
#define MSG8 "Introdueix l'any de publicació del llibre:\n"
#define MSG9 "Introdueix l'usuari que ha agafat el llibre:\n"
#define MSG10 "Introdueix el numero de dies de prestec:\n"
#define MSG11 "\n\tAquestes són les dades de l'oficina: \n    +---------------------------------------------------------------------------------------------+\n"
#define MSG12 "    | Libre\t| Autor\t\t| Editorial\t| Unitats | Data de Publicació | Usuari\t| Prèstec |\n+---+---------------------------------------------------------------------------------------------+\n"
#define MSG13 "| %d | %s\t| %s\t| %s\t| %d\t  | %d-%d-%d\t       | %s | %d\t  |\n+---+---------------------------------------------------------------------------------------------+\n"

struct usr {
	char name[50];
	int time;
};

struct date {
	int day;
	int month;
	int year;
};

struct biblio {
	char title[50];
	char autor[50];
	char editorial[50];
	struct date time;
	int units;
	struct usr user;
};

void modifyData(struct biblio*, int);
void printData(struct biblio*, int);

#endif
