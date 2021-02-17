#include <stdio.h>

int main(void) {
	int i, arvosana, arvosanojenlkm;
	double keskiarvo, yhteensa;
	
	printf("Ohjelma laskee syötettyjen arvosanojen keskiarvon.\n");
	printf("Lopetus negatiivisella kokonaisluvulla.\n");
	
	/* Kysy arvosanaa kunnes käyttäjä antaa negatiivisen luvun */
	i = 1;
	arvosana = 0;
	arvosanojenlkm = 0;
	yhteensa = 0;
	
	do {
		printf("Anna arvosana (4-10):");
		scanf("%d", &arvosana);
		if (arvosana > 3) {
			yhteensa += arvosana;
			arvosanojenlkm++;
		} else
			break;
	} while (i > 0);
	
	keskiarvo = yhteensa / arvosanojenlkm;
	
	printf("Ohjelmaan syötetty %d arvosanaa.\n", arvosanojenlkm);
	printf("Arvosanojen keskiarvo: %.2f", keskiarvo);
	
	return 0;
}
