#include <stdio.h>
#include <stdlib.h>

/*Pedir datos de 10 estudiantes y almacenarlos en un formulario mediante una estructura */

typedef struct{
	char nombre[50];
	char segundo_nombre[50];
	char primer_apellido[50];
	char segundo_apellido[50];
	char genero[50];
	char carrera[50];
	char facultad[50];
	char residencia[50];
	int fecha_nacimiento[50];
	int semestre[50];
	char turno[50];
	int matricula[50];
	
}reg;

int main() {
	
	reg f1;
	
	printf("Introduce valores para el formulario: \n");
	printf("Introduce tu nombre:");
	fgets(f1.nombre,50,stdin);
	
	printf("Introduce tu segundo nombre:");
	fflush(stdin);
	fgets(f1.segundo_nombre,50,stdin);
	
	printf("Introduce tu primer apellido:");
	fflush(stdin);
	fgets(f1.primer_apellido,50,stdin);
	
	printf("Introduce tu segundo apellido:");
	fflush(stdin);
	fgets(f1.segundo_apellido,50,stdin);
	
	printf("Introduce tu genero:");
	fflush(stdin);
	fgets(f1.genero,50,stdin);
	
	printf("Introduce tu carrera:");
	fflush(stdin);
	fgets(f1.carrera,50,stdin);

	printf("Introduce tu facultad:");
	fflush(stdin);
	fgets(f1.facultad,50,stdin);

	printf("Introduce tu lugar de residencia:");
	fflush(stdin);
	fgets(f1.residencia,50,stdin);
	
	printf("Introduce tu fecha_nacimiento:");
	fflush(stdin);
	fgets(f1.fecha_nacimiento,50,stdin);

	printf("Introduce tu semestre:");
	fflush(stdin);
	fgets(f1.semestre,50,stdin);
	
	printf("Introduce tu turno:");
	fflush(stdin);
	fgets(f1.turno,50,stdin);
	
	printf("Introduce tu matricula:");
	fflush(stdin);
	fgets(f1.matricula,50,stdin);
	
	printf("Los valores son: \n");
	printf("El nombre de f1: %s",f1.nombre);
	printf("El segundo nombre de f1: %s",f1.segundo_nombre);
	printf("El primer apellido de f1: %s",f1.primer_apellido);
	printf("El segundo apellido de f1: %s",f1.segundo_apellido);
	printf("La carrera de f1: %s",f1.carrera);
	printf("La facultad de f1: %s",f1.facultad);
	printf("El lugar de residencia de f1: %s",f1.residencia);
	printf("La fecha de nacimiento de f1: %s",f1.fecha_nacimiento);
	printf("El semestre de f1: %s",f1.semestre);	
	printf("El turno de f1: %s",f1.turno);
	printf("La matricula de f1: %s",f1.matricula);	
	
	system("pause");
	return 0;
}
//Maestro no se como hacer para que sea para 10 estudiantes, ¿tendria que hacer 10 formularios? creo que seria demasiado xd
