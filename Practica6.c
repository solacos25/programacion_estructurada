#include <stdio.h>
#include <stdlib.h>

/* Practica_5 Numeros mayores o iguales a cero */
int main() {
	int num=0, sum=0, n=-1, prim_num=0;
	float prom=0;
	printf ("Inicio\nPara finalizar el programa ingrese un número negativo:\n");
	do {
	sum=sum+num;
	n++;
	printf("Escribe el numero:");
	scanf("%d", &num);
	} while(num>=0);
	if(num<0);
	printf("prim_num=-1 no se obtiene el promedio:\n");
	prom=((float)sum)/n;
	printf ("El promedio de los números es %d %d %f", sum, n, prom);
	return 0;
}
