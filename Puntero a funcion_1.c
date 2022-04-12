#include <stdio.h>
//puntero a funcion

int suma (int a, int b){
	return a+b;
}
int main(int argc, char *argv[]) {
	int (*p)(int, int);//puntero que apunta a la funcion
	
	p = suma;//el nombre de las funciones apunta a la direccion de memoria donde empieza la funcion
	printf("%d\n", suma (3,4));
	
	printf("%d\n", (*p)(3,4));//funciona exactamente igual
	
	return 0;
}

