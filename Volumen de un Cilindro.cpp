#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float radio, altura, volumen,pi;
	
	pi=3.1415926535897932384;
	
		printf("se procedera a calcular el volumen de un cilindro\n\n");
		printf("ingrese el radio del cilindro expresado en cm\t\t");
		scanf("%f", &radio);
		printf("ingrese la altura del cilindro expresado en cm\t\t");
		scanf("%f", &altura);
		
		volumen=pi*radio*radio*altura;
			
		printf("\n\n El volumen del triangulo es de v=%.2f\n\n", volumen);
			 
	return 0;
}

