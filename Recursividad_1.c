#include <stdio.h>
void saludo(void){
	printf("Hola mundo!\n");
	saludo();/*Llamo a la funci�n saludo en el main, esta imprime y luego se llama a s� misma.
	Se vuelve un bucle.
	Esta funci�n no es recursiva porque no tiene utilidad pero las funciones recursivas se autollaman*/
}
}
int main(int argc, char *argv[]) {
	saludo();//funcion recursiva
	
	return 0;
}

