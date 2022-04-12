#include <stdio.h>
struct punto2d{
	float x; 
	float y;
};
int main(int argc, char *argv[]) {
	struct punto2d p1 = {2,3};
	struct punto2d *pp; // un puntero a un tipo de dato struct

	pp = &p1; // copiamos la direccion de memoria en el puntero, pero si ponemos &p1.x nos tirara error
	// no podemos asignar un puntero struct a un elemento float como x
	
	printf("(%.2f, %.2f)\n", p2.x, p2.y);
	return 0;
}

