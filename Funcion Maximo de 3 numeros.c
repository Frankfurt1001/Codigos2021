/* Encuentra el máximo de tres enteros */
#include <stdio.h>
int Maxi( int x, int y, int z ); /* prototipo de la función */
/* la función main comienza la ejecución del programa */
int main(int argc, char *argv[]) {

	int num1; /* primer entero */
	int num2; /* segundo entero */
	int num3; /* tercer entero */
	printf("Ingrese el valor del primer numero\n\n");
	scanf("%d", &num1);
	printf("Ingrese el valor del segundo numero\n\n");
	scanf("%d", &num2);
	printf("Ingrese el valor del tercer numero\n\n");
	scanf("%d", &num3);
	/* num1, num2 y num3 son los argumentos
	para la llamada a la función Maxi */
	printf( "El maximo es: %d\n", Maxi( num1, num2, num3 ) );
	 /* indica que main no retorna nada */
	/* fin de main */
	return 0;
}

/* Definición de la función máximo */
/* x, y, y z son parámetros */
int Maxi (int x, int y, int z )
{
	int max = x; /* asume que x es el mayor */
	if ( y > max ) { /* si y es mayor que max, asigna y a max */
		max = y;
	}
	if ( z > max ) { /* si z es mayor que max, asigna z a max */
		max = z;
	}
	return (max); /* max es el valor más grande */
} /* fin de la función máximo */
