#include <stdio.h>

#define N 10

int main (void) {
	int arreglo[N] = {9,3,2,5,7,8,4,1,6,0};
	int tmp;
	
	for (int i = 0; i < N; i++)//imprime el arreglo inicial
		printf("%d ", arreglo[i]);
	
	printf("\n");
	
	// burbuja (y mejorada con el -j)
	for (int j = 0; j < N-1; j++) {// repite el algoritmo n-1 veces para no hace la ultima pregunta
		for (int i = 0; i < N-1-j; i++) { //hara menos preguntas segun se vaya ordenando, cuando 7 no es mas grande que 8 por ejemplo
			if (arreglo[i] > arreglo[i+1]) {
				tmp = arreglo[i];//salvo la variable
				arreglo[i] = arreglo[i+1];//le paso el balor que seguia al que encontramos
				arreglo[i+1] = tmp;//avanza el numero mayor 
			}
			
		}
		for (int i = 0; i < N; i++)//imprime el arreglo en cada cambio que va haciendo
			printf("%d ", arreglo[i]);
		printf("\n"); 
		//termina la vuelta y sigue con la siguiente para ordenar el primer numero, y asi
	}
	
	for (int i = 0; i < N; i++)
		printf("%d ", arreglo[i]);
	
	printf("\n");
	
	return 0;
}


