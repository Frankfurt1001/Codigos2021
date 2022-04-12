#include <stdio.h>

int main(int argc, char *argv[]) {
	int arreglo [5]= {4,3,1,7,6};
	int max, posc;
	
	max = arreglo[0];
	for (int i = 1; i < 5; i++){
		if (arreglo[i] > max){
			max = arreglo[i];
			posc = i;
		}
	}
	printf("El maximo es %d y esta en la posicion %d\n", max, posc);
	return 0;
}

