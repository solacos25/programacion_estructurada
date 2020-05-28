#include <stdio.h>
#include <stdlib.h>

/* Multiplos de una tabla de multiplicar, en este caso se usa la tabla del 5, y se ven los primeros 4 multiplos */

int main() {
int tabla, multiplos;

	printf("\nIngrese tabla de multiplicar:");
	scanf("%d", &tabla);
	printf("\nIntroduce los multiplos que quieres de esa tabla");
	scanf("%d", &multiplos);
	
	//Bucle for:
	int i;
	for (i=0;i<5;i++)
	printf("&d", i);
	int j;
	for (j=0;j<4;j++)
	printf("&d", i);
	
	printf("\n");
	
	return 0;
}
/*prof no se bien cuales eran las instrucciones, lo siento, igual no se que le pasa a mi compilador jaja sorry:c
