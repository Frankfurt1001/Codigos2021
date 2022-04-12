#include <stdio.h>
void sumat();//un void no requiere un return, porque solo hace lo que contiene adentro
//esto se llama prototipo
int main(int argc, char *argv[]) 
{
	sumat();//aqui hacemos el llamado a la funcion
	return 0;
}
void sumat(int num1, int num2)//se pueden declarar los parametros en los parentesis o adentro de la funcion
{//estas son variables locales a la funcion sumat, no hace falta declararlas en main
	int suma=0;
	printf("Ingrese el primer numero\n");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero\n");
	scanf("%d", &num2);
	suma = num1 + num2;
	printf("\n\nLa suma de los dos numeros es igual a: %d", suma);
}
