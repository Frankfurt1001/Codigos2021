#include <stdio.h>
int factorial(int numero){
	if(numero < 1){
		return 0;
	}
	else if(numero == 1){
		return 1;
	}
	else{
	   return numero * factorial(numero-1);
	}
}
int main(int argc, char *argv[]) {
	int numero;
	long int resultado;
	printf("Introduce en numero: ");
	scanf("%d", &numero);
	resultado = factorial(numero);
	
	printf("\nEl factorial de %d es %d\n", numero, resultado);
	return 0;
}

