#include <stdio.h>

int main(int argc, char *argv[]) {
	int nota = 5;
	int aprobado;
	/*if(nota >= 6)
	aprobado = 1;
	else 
	aprobado = 0;
	*/ 
	
	
	//operador ternario sirve para reemplazar un if en ciertos casos, el operador es ?:
	 aprobado = nota >=6 ? 1 : 0;
	/* aprobado = es donde se guardara el resultado, ?: es el separador, antes del ? va lo que se tiene que evaluar
	 despues del ? se pone que devolvera si es verdadero, y luego del : para ver que devuelve si
	 es falso*/
	 
	 	
	if(aprobado == 1)
		printf("Aprobado!\n");
	else 
		printf("Desaprobado!\n");
	return 0;
}

