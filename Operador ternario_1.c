#include <stdio.h>

int main(int argc, char *argv[]) {
	int n = 1;
	//otra funcionn para un operador ternario
	//en este ejemplo, si n es mayor a 1, imprime una s al final para escribir caramelos.
	// si es 1, imprime un espacio dejando caramelo simplemente
	printf("hay %d caramelo%c \n", n, n > 1 ? 's' : ' ');
	
	
	
	//de otra manera: sin el operador ternario es mas largo
	char caracter; 
	if(n > 1)
		caracter = 's';
	else
		caracter = ' ';
	printf("hay %d caramelo%c \n", n, caracter);
	
	
	
	
	// otro ejm
	int a =1, b = 3;
	//en este ejemplo compararemos cual es el mayor
	printf("El mayor es %d \n", a > b ? a : b);
	
	return 0;
}

