#include <stdio.h>

int mcd(int, int);

int mcd_rec(int, int);

int main(void) {
	
	int num1, num2;
	
	
	printf("Este programa calcula el mínimo comun divisor entre 2 números.\n\n");
	
	do{
	
	printf("\nIngrese 2 numeros seguidos de un 'enter'.\n");
	printf("Para salir ingrese '-1' en cualquiera de los 2 números.\n\n");
	scanf("%d %d", &num1, &num2);
	
		if (num1 != -1 && num2 != -1){
			printf("\nMCD de %d y %d: %d\n", num1, num2, mcd(num1, num2));
			printf("MCD de %d y %d (recursivo): %d\n", num1, num2, mcd_rec(num1, num2));
		} else
			printf("Nos vemos!");
	
	} while (num1 != -1 && num2 != -1);
	
	return 0;
}

int mcd(int a, int b) {
	
	int aux;
	
	while (b != 0) {
		aux = b;
		b = a % b;
		a = aux;
	}
	
	return a;
}

int mcd_rec(int a, int b) {
	if (b == 0) return a;
	
	return mcd_rec(b, a % b);
}
