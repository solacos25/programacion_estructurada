#include <stdio.h>
#include <stdlib.h>

/* Practica 3-Prof disculpe de verdad por subir apenas estas practicas, es que eran las primeras, cuando aún no le agarraba la onda jaja (soy matematica y se me complica mucho todo esto:c, pero ya espero  subir todas como le hice desde la 4:) */

int main() {
	char c;
	printf ("Enter character:");
	c=getchar ();
	int a= (int) c;
	if (48<= a && a<=57){
	printf ("Number entered:");
	}else{
		if (65<= a && a <=90){
		printf ("Upper alphabetic entered:");
	}else{
			if (97<=a && a <=122){
			printf ("Lower alphabetic entered:");
		}else{
				printf ("Symbol entered:");
	}
	}
	}
	putchar (c);
	printf ("\n");
	return (0);
}
