#include <stdio.h>

int summa();
int erotus();
int tulo();
int luku1, luku2, tulos;


int main() {

	int laskutoimitus;
	while (laskutoimitus > -1) {
	printf("1: kahden luvun summa\n2: kahden luvun erotus\n\
3: kahden luvun tulo\n<0: ohjelman lopetus");
	
	printf("Valitse laskutoimitus:");
	scanf("%d", &laskutoimitus);
	
	if (laskutoimitus == 1) {
		summa();
	}
	else if (laskutoimitus == 2) {
		erotus();
	}
	else if (laskutoimitus == 3) {
		tulo();
	}
	else {
		printf("Ohjelma lopetetaan...");
		break;
	}
	}
	return 0;
}

int summa() {
	/* Pyytää käyttäjältä kaksi lukua ja laskee ne yhteen*/
	printf("Syötä ensimmäinen luku:");
	scanf("%d", &luku1);
	
	printf("Syötä toinen luku:");
	scanf("%d", &luku2);
	
	tulos = luku1 + luku2;
	printf("%d + %d = %d", luku1, luku2, tulos);
}
int erotus() {
	/* Pyytää käyttäjältä kaksi lukua ja vähentää luvun luku2 luvusta luku1*/
	printf("Syötä ensimmäinen luku:");
	scanf("%d", &luku1);
	
	printf("Syötä toinen luku:");
	scanf("%d", &luku2);
	
	tulos = luku1 - luku2;
	printf("%d - %d = %d", luku1, luku2, tulos);
}
int tulo() {
	/* Pyytää käyttäjältä kaksi lukua ja laskee niiden tulon*/
	printf("Syötä ensimmäinen luku:");
	scanf("%d", &luku1);
	
	printf("Syötä toinen luku:");
	scanf("%d", &luku2);
	
	tulos = luku1 * luku2;
	printf("%d *%d = %d", luku1, luku2, tulos);
}
