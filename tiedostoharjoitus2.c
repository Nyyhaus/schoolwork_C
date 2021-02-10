#include <stdio.h>

int main(void) {
	int summa, luku1, luku2, luku3, luku4;
	FILE *tiedosto = fopen("luvut.s", "r");
	
	fscanf(tiedosto, "%d %d %d %d", &luku1, &luku2, &luku3, &luku4);
	summa = luku1 + luku2 + luku3 + luku4;
	fclose(tiedosto);

	printf("Tiedostosta luvut.s löytyneet luvut:\n%d, %d, %d ja %d\n", luku1, luku2, luku3, luku4);
	
	printf("\nLukujen summa: %d", summa);
	return 0;
}
		
