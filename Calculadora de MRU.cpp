#include <stdio.h>

int main() {   
	
	float X, Xo, Vo, a, t;
	
	printf("Calculadodora para la posicion de un objeto con MRU\n\n");
	
	printf("Ingrese la Posiciòn Inicial en metros\n");
	
		scanf("%f", &Xo);
		printf("Ingrese la velocidad en m/s\n ");
		scanf("%f", &Vo);
		printf("Ingrese la aceleracionm/segundo cuadrado\n "),
		scanf("%f", &a);
		printf("Ingrese el tiempo en s\n ");

		scanf("%f", &t);
		
		X= Xo+(Vo*t)+(0.5*a*t*t);
			
			printf("\n \n La nueva posicion es X=%.2f \n\n", X);
			
		
	return 0;
}

