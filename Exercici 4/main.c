void main() {

	int num, i, ap = 0, sus = 0;
  float avg_ap = 0, avg_su = 0;

	for (i = 0; i < SIZE; i++) {
		num = validar();

		sus = calc_not(num) + sus;
    ap = SIZE - sus;
		avg_ap = avg_note(num, ap);
		avg_su = avg_note(num, sus);
	}
  printf("La mitjana d'aprovats és de %.2f i la de suspesos és %.2f.\n", avg_ap/ ap, avg_su / sus);
	printf("La quantitat d'aprovats és de %d i la de suspesos és %d.\n", ap, sus);

}
