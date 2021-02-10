#include <stdio.h>

int main(void) {
	FILE *tiedosto = fopen("hello.usr", "w");
	fprintf(tiedosto, "Moi maailma!");
	
	
	printf("Tiedostoon kirjoittaminen onnistui.\nOhjelma suljetaan.");
	fclose(tiedosto);
	return 0;
}
