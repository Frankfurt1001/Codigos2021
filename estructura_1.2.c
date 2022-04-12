#include <stdio.h>
struct punto2d{
	float x; //se define uno por renglon unicamente
	float y;// uno por renglon con el tipo
};//termina en punto y coma
int main(int argc, char *argv[]) {
	struct punto2d p1;
	printf("Ingrese la coordenada x: ");
	scanf("%f", &p1.x);// el operador punto tiene mayor precedencia que el operador de memoria &
		
	printf("Ingrese la coordenada x: ");
	scanf("%f", &p1.y);// primero vemos el punto, esta en la estructura p1 y va al elemento x de dicha estructura
	
	
	printf("(%.2f, %.2f)\n", p1.x, p1.y);
	
	return 0;
}

