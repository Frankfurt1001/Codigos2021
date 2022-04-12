#include <stdio.h>
#define tam 9
int main(int argc, char *argv[]) {
	char arrayEj [tam];
	int i=0;
	
	int n=0;
	for(i=0; i < tam; i++){
		printf("Ingrese el elemento que le pertenece al arreglo \t" );
		scanf(" %c", &arrayEj[i]);
		printf("\n");
	}
	for(i=0; i<tam; i++){
		printf(" El elemento del arreglo  \n" );
		printf(" arrayEj[%d]\t %c\t %p %d\n", i, arrayEj[i], &arrayEj[i], sizeof(arrayEj[i]));//%d y sizeof manda el tamaño que ocupa esa variable en la computadora
	
		
	}
	
	return 0;
}

