#include <stdio.h>
#include <stdlib.h>

/* Hacer la serie de Fibonacci hasta el termino n introducido por teclado */

int main() {
	
	int x, y, res, n, i;
	
	printf("Introduce un numero de terminos para la sucesion de Fibonacci:");
	scanf("%i",&n);
	
	i=3;
	x=0;
	y=1;
	
	if(n==1){
		printf("0");
	}
	else{ 
		printf ("0, 1,");
	}
	while (i <= n){
		res = x + y;
		printf ("%i,",res);
		x = y;
		y = res;
		i++;	
		
	}
	
	printf("\n");
	
	system("pause");
	return 0;
}
