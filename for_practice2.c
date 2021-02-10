#include <stdio.h>

int main() {
    int i, n, kertoma; 
    
	printf("Anna kokonaisluku:");
	scanf("%d", &n);
	
	kertoma = 1;
	for (i = 1; i <= n; i++) {
		kertoma *= i;
	}
	
	printf("Luvun %d kertoma on %d", n, kertoma); 

    return 0;
}
