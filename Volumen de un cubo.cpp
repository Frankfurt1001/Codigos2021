#include <stdio.h>

int main(int argc, char *argv[]) {
	float a,v;
	printf("Se calculara el volumen de un cubo\n\n");
		printf("ingrese el valor de la arista en cm\n\n");
		scanf("%f", &a);
		v=a*a*a;
			printf("\n\n El volumen del cubo es:%.2f cm cubicos\n\n", v);
	return 0;
}

