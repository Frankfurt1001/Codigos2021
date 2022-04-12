#include <stdio.h>
#define M 5
#define N 3
int main(int argc, char *argv[]) {
	char nombre[M];
	int legajos[M];
	int notas[M];
	int k = 1;
	for( int i = 0; i < M; i++){
	printf("Ingrese el nombre del alumno\n");
	scanf(" %s", &nombre[M]);
	printf("Ingrese el legajo del alumno\n");
	scanf(" %d", &nombre[M]);
	}
	for( int i = 0; i < M; i++){
		printf("Ingrese la nota %d del alumno\n", k);
		scanf(" %s", &nombre[M]);
	}
	return 0;
}

