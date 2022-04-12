#include <stdio.h>
#define N 10;
int main(int argc, char *argv[]) {
	int notas[];
	for( int i = 0;i < N;i++){
		do{
		printf("Ingrese la calificacion obtenida: ");
		scanf("%d", &notas[i]);
	} while(notas[i]<1||notas[i]>10);
	for(int i = 0; i<N;i++)
		printf("%d\n", notas[i]);
	return 0;
}

