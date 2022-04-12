#include <stdio.h>

int main() {
	
	float a , b, X;
		printf("Se calculara el area de un cilindro\n\n");
		
		printf("ingrese la altura del cilindro en cm\t\t");
			scanf("%f", &a);
			printf("ingrese el radio del cilindro en cm\t\t");
			scanf("%f", &b);
		X =(2*3.141592*b)*(a+b);
				printf("\n\n el area del cilindro es X=%.2f\n\n",X);
				   
				   
	return 0;
}

