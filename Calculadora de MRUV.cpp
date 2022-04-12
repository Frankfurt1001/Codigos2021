#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("Calculadora de MRUV\n\n");
	float t,a,v,p,d;
		printf("Ingrese el valor del tiempo en segundos\n\n");
	scanf("%f", &t);
	printf("ingrese el valor de la aceleracion en m/s cuadrados\n\n");
	scanf("%f", &a);
	printf("ingrese el valor de la velocidad inicial en m/s\n\n");
	scanf("%f", &v);
	printf("ingrese el valor de la posicion inicial en m\n\n");
	scanf("%f", &p);
	
	d=p+(v*t)+(1/2*a*t*t);
	
	printf("\n\n la distancia recorrida es:%.2f\n\n", d);
	
	return 0;
}

