#include <stdio.h>
#include <stdlib.h>

/* Practica 2 */

int main(int argc, char *argv[]) {
	int x=5, y=10, z, I, m;
	float a=15.3, b=20.7, c;
	char w, h;
	/*Enteros*/
	z=x+y;
	printf ("%d + %d= %d\n", x,y,z);
	z=y-x;
	printf ("%d - %d= %d\n", y,x,z);
	z=x*y;
	printf ("%d * %d= %d\n", x,y,z);
	z=y/x;
	printf ("%d / %d= %d\n", x,y,z);
	z=y%x;
	printf ("%d mod %d= %d\n", x,y,z);
	++z;
	printf ("++z= %d\n",z);
	--x;
	printf ("--z= %d\n",x);
	/*flotantes*/
	c=a+b;
	printf ("%f + %f= %f\n",a,b,c);
	c=a-b;
	printf ("%f - %f= %f\n",a,b,c);
	c=a*b;
	printf ("%f * %f= %f\n",a,b,c);
	c=a/b;
	printf ("%f * %f= %f\n",a,b,c);
	c=b>a;
	printf ("%f > %f= %f\n",a,b,c);
	c=a==b;
	printf ("%f == %f= %f\n",a,b,c);
	c=b<a;
	printf ("%f < %f= %f\n",a,b,c);
	c=b>=a;
	printf ("%f >= %f= %f\n",a,b,c);
	c=b<=a;
	printf ("%f <= %f= %f\n",a,b,c);
	/*Character*/
	w>6;
	printf ("%s>>6\n",w);
	h<<5;
	printf ("%s<<5\n",h);
	/*Boleanos*/
	I=21;
	if (I>12 &&I<24)
	printf ("El numero esta entre 12 y 24\n");
	m=56;
	if (m>=34 || m<120)
	printf ("%d",m);
	return 0;
}
