#include <stdio.h>
//Puntero a puntero
void imprimir (int *vect){//los arreglos son punteros al pasarselas a las funciones
	
	for(int i = 0; i < 5; i++)
		printf("%d\n", *(vect+i));
		
	printf("%lu\n", sizeof vect);
}
int main(int argc, char *argv[]) {
	int arreglo [5]= {1,2,3,4,5};
	imprimir(arreglo);
	imprimir(arreglo);
	
	return 0;
}

