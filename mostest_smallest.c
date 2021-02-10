#include <stdio.h>

int suurin(int luku1, int luku2, int luku3);
int pienin(int luku1, int luku2, int luku3);

int luku1, luku2, luku3, isoin, pikkuisin;

int main() {
	printf("Anna 1. luku:");
	scanf("%d", &luku1);
	
	printf("Anna 2. luku:");
	scanf("%d", &luku2);
	
	printf("Anna 3. luku:");
	scanf("%d", &luku3);
	
	suurin(luku1, luku2, luku3);
	pienin(luku1, luku2, luku3);
	
	printf("Syöttämistäsi luvuista suurin oli %d ja pienin %d.", isoin, pikkuisin);
	
	
	return 0;
}

int suurin(int luku1, int luku2, int luku3) {
	/*Ottaa vastaan argumenttina kolme lukua, etsii niistä suurimman
	ja palauttaa sen. */

	if (luku1 > luku2 && luku1 > luku3) {
		isoin = luku1;
		return isoin;
	}
	else if (luku2 > luku1 && luku2 > luku3) {
		isoin = luku2;
		return isoin;
	}
	else {
		isoin = luku3;
		return isoin;
	}
}

int pienin(int luku1, int luku2, int luku3) {
	/*Ottaa vastaan argumenttina kolme lukua, etsii niistä pienimmän
	ja palauttaa sen. */

	if (luku1 < luku2 && luku1 < luku3) {
		pikkuisin = luku1;
		return pikkuisin;
	}
	else if (luku2 < luku1 && luku2 < luku3) {
		pikkuisin = luku2;
		return pikkuisin;
	}
	else {
		pikkuisin = luku3;
		return pikkuisin;
	}
}
