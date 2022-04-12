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
	for(int j = 0; j < N-1; j++){//este j sirve de pivote para ir intercambiando el menor por la posicion primera
		min = arreglo[j];//luego el menor +1 en el segundo lugar y asi, ordena el 0, el 1, el 2 y asi sucesivamente
		min_i = j;
		for (int i = j; i < N; i++){
			if (arreglo[i] < min){
				min = arreglo[i];
				min_i = i;
			}
		}
		//salva e intercambia los valores
		tmp = arreglo[j];
		arreglo[j] = arreglo[min_i];
		arreglo[min_i] = tmp;
		
		for (int i = 0; i < N; i++){//imprime el arreglo mientras se va ordenando
			printf("%d ", arreglo[i]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < N; i++){//imprime el arreglo con el primer numero siendo el menor 
		printf("%d ", arreglo[i]);
	}// y el numero de la posicion inicial pasando al lugar donde estaba el cero
	//este metodo es mejor que el de la burbuja porque hace menos intercambios
	return 0;
}

