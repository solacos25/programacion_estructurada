#include <stdio.h>
#include <stdlib.h>

/* Definir una matriz de 3*3 de valores enteros, despues multiplicar la matriz por un escalar */

void introduce (int matriz[][3]);
void leer (int matriz[][3]);
void escribe (int numero);

int main() {
	
	int matriz[3][3];
	
	introduce (matriz);
	leer (matriz);
	system ("pause");
	
	return 0;
}

void introduce (int matriz[][3]) {
	int i, j;
	
	srand(time(NULL));
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			matriz [i][j] = rand()%10;
		}
	}
}

void leer (int matriz[][3]) {
	int i, j;
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++){
			printf("%i ", matriz[i][j]);
		}
		printf("\n");
	}	
}
void escribe (int numero) {
	int k, matriz[][3];
	
	srand(time(NULL));
	for (k=0; k<3; k++) {
	}
	numero = rand()%10;
	
	printf("Multiplicacion %i\n", k * matriz[][3]);
	
	//*Prof ya no supe que hacer, perdon, intente de todo pero no me sale:( la matriz se ejecuta muy bien si se quita lo ultimo, osea si se crea la matriz lo que no supe fue multiplicarla por un escalar*//
	
}
