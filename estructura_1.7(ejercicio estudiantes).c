#include <stdio.h>
struct notas{
	int parcial1;
	int parcial2;
	int final;
};
struct estudiante{
	int legajo;
	char apellido[80];
	char nombre[80];
	struct notas info1;//dentro de la estructura declaramos otra
};
void imprimir_registro(struct estudiante);
void cargar_registro (struct estudiante *);
int main(int argc, char *argv[]) {
	struct estudiante e1;
	printf("Ingrese el legajo: ");
	scanf("%d", &e1.legajo);
	printf("Ingrese el nombre: ");
	scanf("%s", &e1.nombre);// o nombre[0] simplemente
	printf("Ingrese el apellido: ");
	scanf("%s", &e1.apellido);
	printf("Ingrese el parcial 1 de info: ");
	scanf("%d", &e1.info1.parcial1);//del estudiante uno, en la materia info 1, traigo el parcial 1
	printf("Ingrese el parcial 2 de info: ");
	scanf("%d", &e1.info1.parcial2);
	
	printf("\n");
	
	printf("Legajo: %d ", e1.legajo);
	printf("\n");
	printf("nombre: %s %s",e1.nombre, e1.apellido );
	printf("\n");

	printf("parcial 1 de info: %d ",e1.info1.parcial1 );
	printf("\n");
	
	printf("parcial 2 de info: %d", e1.info1.parcial2);
	
	return 0;
}

