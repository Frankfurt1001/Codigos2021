#include <stdio.h>
struct punto2d{
	float x; //4 bites
	float y;// 4 bites
	char z1;// con este llega a 12 bytes y hasta aqui tenemos 3 bites libres
	char z2;//1
	char z3;//2
	char z4;//3
	char z5;//completa los 3 bites y aumenta directamente 4 bytes mas, ahora son 16
};//entonces es recomendable poner los que usan mas bytes arriba, al principio
int main(int argc, char *argv[]) {
	struct punto2d p1 = {2,3}; 
	printf("%lu\n", sizeof p1);// muestra el tamaño de la estructura
	printf("(%.2f, %.2f)\n", p1.x, p1.y);
	return 0;
}

