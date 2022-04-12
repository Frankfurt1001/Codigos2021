#include <stdio.h>
struct matriz{
	int data[3][3];
	int det;
};
void carga( struct matriz *m){//esta estructura m es una copia de matriz mat
	int c = 0;//se copio el valor de la estructura
	
	for( int i = 0; i < 3; i++){
		for( int j = 0; j< 3; j++)
		m->data[i][j]= c++;
	}
}
int main(int argc, char *argv[]) {
	struct matriz mat = {0};
	
	carga(&mat);
	
	
	for( int i = 0; i < 3; i++){
		for( int j = 0; j< 3; j++)
	printf("%5d", mat.data[i][j]);
		printf("\n");
	}
	return 0;
}

