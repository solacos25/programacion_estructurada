#include <stdio.h>

/* Practica 4 Calculadora Jueves 20 de febrero de 2020*/

int main() 
{
	float num1, num2, Resultado;
char op;
printf ("Calculadora simple\n");
printf ("Escribe el primer numero");
scanf ("%f", &num1);
printf ("Escribe la operacion a realizar");
scanf (" %c", &op);
printf ("Escribe el segundo numero");
scanf ("%f", &num2);
switch (op){
case '+':
Resultado= num1 + num2;
break;
case '-':
Resultado= num1 - num2;
break;
case '*':
Resultado= num1 * num2;
break;
case '/':
Resultado= num1/num2;
default:
printf ("operador invalido \n");
}
printf  ("%.2f %c %.2f = %.2f", num1, op, num2, Resultado);
return 0;
}
