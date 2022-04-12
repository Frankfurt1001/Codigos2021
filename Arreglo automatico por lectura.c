#include <stdio.h>
#define tam 9
int main(int argc, char *argv[]) {
	char arrayEj [9];
	char var= 'a';//comillas simples
	int i;
	for(i=0; i<tam; i++){
		printf(" %d\n", var );
		arrayEj[i]=var;//el array sera el caracter a que declaramos al inicio
		var++;//aumenta var en 1, b, c, d, y asi hasta 9 veces
	}
	
	for(i=0; i<tam; i++){
		printf(" arrayEj[%d] = %c  %p  %d \n", i, arrayEj[i], &arrayEj[i], sizeof(arrayEj[i]));//numero de array, caracter guardado en ese array, y la direccion dentro de la memoria
	}
	//%d y sizeof me muestra el tamaño que ocupa
	
	return 0;
}

