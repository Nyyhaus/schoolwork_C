#include <stdio.h>

int main() {
	char juoma;
	int maara;
	
	printf("Juotko kahvia vai teetä (k/t)?");
	juoma = getchar();
	getchar();

	if (juoma == 'k') {
		printf("Montako kuppia juot päivässä:");
		scanf("%d", &maara);
		
		if (maara < 3) {
			printf("Et taida juoda paljoa kahvia.");
		}
		else if (maara > 2) {
			if (maara < 21) {
				printf("Juotpa paljon kahvia!");
			}
			else {
				printf("Ohjelmassa tapahtunut virhe!");
			}
		}
	}
	else if (juoma == 't') {
		printf("Montako kuppia juot päivässä:");
		scanf("%d", &maara);
		
		if (maara < 3) {
			printf("Et taida juoda paljoa teetä.");
		}
		else if (maara > 2) {
			if (maara < 21) {
				printf("Juotpa paljon teetä!");
			}
			else {
			printf("Ohjelmassa tapahtunut virhe!");
			}
		}
	}
	else {
		printf("Montako kuppia juot päivässä:");
		scanf("%d", &maara);
		
		if (maara < 3) {
			printf("Et taida juoda paljoa teetä.");
		}
		else if (maara > 2) {
			if (maara < 21) {
				printf("Juotpa paljon teetä!");
			}
			else {
			printf("Ohjelmassa tapahtunut virhe!");
			}
		}
	}
}
	
