#include <stdio.h>
#include <stdlib.h>

/* Comprobar si un numero es primo */

int main() {
	int n, i, j, aux;
	
	printf("Introduce un numero cualquiera:");
	scanf("%i", &n);
	
	j=0;
	
	for (i = 2; i < n; i++){
		aux = n % i;
		if (aux==0){
			j=1;
		}
	}
	if(j==1){
		printf("%i NO es primo.\n", n);
	}
	else {
		printf("%i ES primo.\n");	
	}
	system ("pause");
	return 0;
}
