#include <stdio.h>
#define N 3
#define M 3
int main(int argc, char *argv[]) {
	
	int tmp;
	int Legajos[N];
	int Notas[M];
	
	for(int i = 0; i < N;i++){
		
		printf("Ingrese el Legajo del Alumno %d: ", i+1);
		scanf(" %d", &Legajos[i]);
			do{
				printf("Ingrese la nota del Alumno %d: ", i+1);
				scanf(" %d", &Notas[i]);  
			}while(Notas[i]<1 || Notas[i]>10);
	}
	for(int i=0; i < N; i++){
		printf("Legajo(%d): %d \tNota(%d): %d", i+1,  Legajos[i], i+1, Notas[i]);
		printf("\n");
	}
	
	return 0;
}

