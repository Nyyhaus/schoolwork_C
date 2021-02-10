#include <stdio.h>

int main() {
	int luku;
	printf("Anna kokonaisluku:");
	scanf("%d", &luku);
	
	if (luku % 2 == 0) {
		printf("Luku %d on parillinen.", luku);
	}
	else if (luku % 2 != 0) {
		printf("Luku %d on pariton.", luku);
	}
}
