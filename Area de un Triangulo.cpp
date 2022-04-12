#include <stdio.h>

int main(int argc, char *argv[]) {
	float b,a,x;
	printf("se calculara el area de un triangulo rectangulo\n\n");
		
		printf("Indique la longitud de la base en centimetros\n\n");
		scanf("%f", &b);
		printf("indique la altura del triangulo en centimetros\n\n");
		scanf("%f", &a);
		x= (b*a)/2;
		
		printf("\n\n el area del triangulo es x=%.2f\n\n", x);
	
	return 0;
}

