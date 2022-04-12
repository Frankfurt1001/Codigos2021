#include <stdio.h>
#define N 3
#define M 3
void carga (int mat[][M], int n, int m){
	int c = 1;//el tamaño de la primera dimension
	//el dato que necesita es el tamaño de las columnas, para ver cuando se inicia la siguiente fila
	for ( int i = 0; i < N; i++){
		for ( int j = 0; j < M; j++){
			mat[i][j] = c++;;
		}
	}
}
	int main(int argc, char *argv[]) {
		int  mat[N][M] = {0};
		carga(mat, N, M);// hacemos la llamada para cambiar los valores de cada elemento de la matriz
		
		for ( int i = 0; i < N; i++){
			for ( int j= 0; j < M; j++){
				printf("%5d", mat[i][j]);
				
			}
			printf("\n");
		}
		
		return 0;
	}

