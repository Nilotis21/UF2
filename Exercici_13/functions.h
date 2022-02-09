#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#define MSG "  Quants registres voldrás: "
#define MSG2 "  Numeros entre: "
#define MSG3 "  I entre: "
#define MSG4 "\n  *************ORDENACIÓ*********************\n\n  1. Ordenar de manera ascendent [1,2,3...]\n\n  2. Ordenar de manera descendent[3,2,1...]\n\n  3. Cercar algún valor.\n\n  4. Sortir del programa.\n\n  *******************************************"
#define MSG5 "\n  Selecciona una opció: "
#define MSG6 "  Quin número vols trobar: "
#define MSG7 "  Aquest número sí que hi és.\n"
#define MSG8 "  Aquest número no hi és.\n"

int valint(char*, int, int);
void omplir(int*, int, int, int);
void order_des(int*, int);
void order_asc(int*, int);
int cercar(int*, int, int);
void mostrar(int*, int);
#endif
