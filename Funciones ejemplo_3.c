#include <stdio.h>
#define N 10
void carga (int v[], int n){
	for ( int i = 0; i < N; i++){
		v[i] = i*i;
	}
}//este v[i] es local en la funcion, pero sirve para modifivar vec
	// estos arreglos son coincidentes en memoria
int main(int argc, char *argv[]) {
	int vect[N] = {0};
	carga(vect, N);// llama a la funcion para modificar el valor de la declaracion anterior
	for ( int i = 0; i < N; i++){
		printf("%d\n", vect[i]);
	}
	
	return 0;
}

