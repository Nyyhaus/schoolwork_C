#include <stdio.h>

int main() {
	char sana[15];
	int tulos, i;
	
	printf("Ohjelma laskee vokaalien määriä.\nAnna sana:");
	scanf("%s", sana);
	tulos = 0;
	for (i = 0; i < 15; i++) {
		if (sana[i] == 'a' || sana[i] == 'e' || sana[i] == 'i' || sana[i] == 'o' ||  sana[i] == 'u' || sana[i] == 'y') {
			tulos++;
		}
	}
	
	printf("Sanassa vokaaleja: %d", tulos);
	
	return 0;
}
