#include <stdio.h>
#define N 10
int main(int argc, char *argv[]) {
	int arreglo[N] = {9,3,2,5,7,8,4,1,6,0};
	int min, min_i, tmp;
	
	for (int i = 0; i < N; i++){//imprime el arreglo inicial
		printf("%d ", arreglo[i]);
	}
	printf("\n");
	
	//seleccion
	min = arreglo[0];
	min_i = 0;
	for (int i = 0; i < N; i++){
		if (arreglo[i] < min){
			min = arreglo[i];
			min_i = i;
		}
	}
	//salva e intercambia los valores
	tmp = arreglo[0];
	arreglo[0] = arreglo[min_i];
	arreglo[min_i] = tmp;
	
	for(int i = 0; i < N; i++){//imprime el arreglo con el primer numero siendo el menor 
		printf("%d ", arreglo[i]);// y el numero de la posicion inicial pasando al lugar donde estaba el cero
	}
	
	return 0;
}

