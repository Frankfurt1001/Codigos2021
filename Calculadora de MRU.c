#include <stdio.h>

int main() {
	printf("Calculadora de MRU\n\n");
	int X, Xo, Vo, a, t;
	
	printf("Ingrese la Posiciòn Inicial en metros\n");
	
		scanf("%d", &Xo);
		
		printf("Ingrese la velocidad en m/s\n ");
		
		scanf("%d", &Vo);
		
		printf("Ingrese la aceleracionm/segundo cuadrado\n "),
			
		scanf("%d", &a);
		
		printf("Ingrese el tiempo en s\n ");
		
		scanf("%d", &t);
		
		X= Xo+Vo*t+0.5*a*t*t;
			
			printf("\n \n La nueva posicion es X=%d \n\n", X);
			
		
	return 0;
}

