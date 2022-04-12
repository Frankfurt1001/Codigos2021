#include <stdio.h>
struct punto2d{
	float x; //se define uno por renglon unicamente
	float y;// uno por renglon con el tipo
};//termina en punto y coma
struct punto2d2{
	float x; 
	float y;
};
int main(int argc, char *argv[]) {
	struct punto2d p1 = {2,3};
	struct punto2d p2;
	p2 = p1;// todo el contenido de la estructura p1, se copia en la estructura p2
	//unicamente fnciona si el tipo de dato es el mismo, si son estructuras diferentes no se puede
	// el ejemplo seria truct punto2d2 p2;
	printf("(%.2f, %.2f)\n", p2.x, p2.y);
	return 0;
}

