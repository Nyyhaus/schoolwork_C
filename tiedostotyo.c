#include <stdio.h>

int main(void) {
	char enimi[16], snimi[21], tiedosto[13];
	FILE *tiedot;
	
	printf("Ohjelma tallentaa etunimesi ja sukunimesi tiedostoon.\nSyötä etunimesi:");
	scanf("%s", enimi);
	
	printf("Syötä sukunimesi:");
	scanf("%s", snimi);
	
	printf("Tiedosto johon haluat tallentaa nimesi:");
	scanf("%s", tiedosto);
	
	tiedot = fopen(tiedosto, "w");
	fprintf(tiedot,"%s%s", enimi, snimi);
  
  fclose(tiedot);
	
	printf("\nTallennus onnistui!");
	return 0;
}
