#include <stdio.h>

int main() {
	int paiva, i;
	float tunnit[30], yhteensa, keskiarvo;
	
	printf("Ohjelma laskee yhteen haluamasi ajanjakson aikana \n"
"tehdyt työtunnit sekä keskimääräisen työpäivän pituuden.\n\n");
	
	printf("Kuinka monta päivää:");
	scanf("%d", &paiva);
	
	for (i = 0; i < paiva; i++) {
		printf("Anna %d. päivän työtunnit:", i + 1);
		scanf("%f", &tunnit[i]);
		yhteensa += tunnit[i];
	}
	
	keskiarvo = yhteensa / paiva;
	
	printf("\nTehdyt työtunnit yhteensä: %.1f\n", yhteensa);
	printf("Keskimääräinen työpäivän pituus: %.1f\n", keskiarvo);
	printf("Syötetyt tunnit:");
	
	for (i = 0; i < paiva; i++) {
		printf("%.1f ", tunnit[i]);
	}
	return 0;
}
