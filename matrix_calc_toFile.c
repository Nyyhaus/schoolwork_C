# include <stdio.h>

int main(void) {
	int matriisi_summa[10][10], matriisi_a[10][10], matriisi_b[10][10], x, y;
	
	FILE *mat_a, *mat_b, *summa;
	
	if ((mat_a = fopen("mata.txt", "r")) == NULL || (mat_b = fopen("matb.txt", "r")) == NULL) {
		printf("Tiedoston avaus epäonnistui (mata.txt & matb.txt).");
		return 0;
	} else {
		for (y = 0; y < 10; y++) {
			for (x = 0; x < 10; x++) {
				if (x == 9) {
					fscanf(mat_a, "%d", &matriisi_a[y][x]);
				} else {
					fscanf(mat_a, "%d", &matriisi_a[y][x]);
				}
			}
		}
		for (y = 0; y < 10; y++) {
			for (x = 0; x < 10; x++) {
				if (x == 9) {
					fscanf(mat_b, "%d", &matriisi_b[y][x]);
				} else {
					fscanf(mat_b, "%d", &matriisi_b[y][x]);
				}
			}
		}
	}
  fclose(mat_a);
  fclose(mat_b);
	
	for (y = 0; y < 10; y++) {
		for (x = 0; x < 10; x++) {
			matriisi_summa[y][x] = matriisi_a[y][x] + matriisi_b[y][x];
		}
	}
	
	if((summa = fopen("summa.usr" , "w")) == NULL) {  
		printf("Tiedoston avaus epäonnistui (summa.usr).");
	} else {
		for (y = 0; y < 10; y++) {
			for (x = 0; x < 10; x++) {
				if(x == 9) { 
					fprintf(summa, "%d\n", matriisi_summa[y][x]); 
				} else { 
					fprintf(summa, "%d ", matriisi_summa[y][x]); 
				}
			}
		}
	}
	
  fclose(summa);
	
	printf("Matriisien summa on laskettu tiedostoon summa.usr.\n");
	return 0;
}
