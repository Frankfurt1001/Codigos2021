#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("Calculadora de MRU\n\n");
	int X, Xo, Vo, a, i, tmp ;
	float t, incremen_t;
	printf("Ingrese la Posiciòn Inicial en metros\n");
	
	scanf("%d", &Xo);
	
	printf("Ingrese la velocidad en m/s\n ");
	
	scanf("%d", &Vo);
	
	printf("Ingrese la aceleracion m/segundo cuadrado\n "),
		
		scanf("%d", &a);
	for(i= 0; i < 8 ; i++){
		printf("Ingrese el tiempo en s\n ");
		
		scanf("%f", &t);
		
		tmp = t;
		t /= 3;
		incremen_t = t * tmp;
		
		
		X= Xo+(Vo*incremen_t)+(0.5*a*incremen_t*incremen_t);
		
		printf("\n \n La posicion %d es X=%d \n\n", i+1, X);
		
	}
	return 0;
}

