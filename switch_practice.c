#include <stdio.h>

int main() {
	int luku1, luku2, toiminto, tulos;
	
	printf("1: vähennyslasku\n");
	printf("2: yhteenlasku\n");
	printf("3: kertolasku\n");
	printf("Valitse toiminto:");
	scanf("%d", &toiminto);
	
	switch (toiminto) {
		case 1: {
			printf("Anna eka luku:");
			scanf("%d", &luku1);
			
			printf("Anna toka luku:");
			scanf("%d", &luku2);
			
			tulos = luku1 - luku2;
			
			printf("%d-%d=%d", luku1, luku2, tulos);
			
			break;
		}
		case 2: {
			printf("Anna eka luku:");
			scanf("%d", &luku1);
			
			printf("Anna toka luku:");
			scanf("%d", &luku2);
			
			tulos = luku1 + luku2;
			
			printf("%d+%d=%d", luku1, luku2, tulos);
			
			break;
		}
		case 3: {
			printf("Anna eka luku:");
			scanf("%d", &luku1);
			
			printf("Anna toka luku:");
			scanf("%d", &luku2);
			
			tulos = luku1 * luku2;
			
			printf("%d*%d=%d", luku1, luku2, tulos);
			
			break;
		}
		
	}
	return 0;
}
