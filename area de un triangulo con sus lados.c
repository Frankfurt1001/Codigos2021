#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float b,h,altura,area;
	printf("Se calculara el area de un triangulo conociendo sus lados");
	
	printf("*primero necesitaremos la altura de el triangulo\n\n");
	
	printf("escriba el valor de la base/2 en cm\n\n");
	scanf("%f", &b);
	printf("escriba el valor de la hipotenusa del lado tomado\n\n");
	scanf("%f", &h);
	altura=sqrt(((h*h)-(b*b)));
		printf("\n\n la altura del triangulo es: %.2f\n\n", altura);
	area= b*altura;
		printf("\n\n finalmente, el area del triangulo es:%.2f\n\n", area);
		return 0;
}

