#include <stdio.h>
//puntero a estructura
struct punto2d{
	float x; 
	float y;
};
int main(int argc, char *argv[]) {
	struct punto2d p1 = {2,3};
	struct punto2d *p;
	p = &p1;
	
	printf("(%.2f, %.2f)\n", (*p).x, (*p).y);//primero ve el parentesis, ve el puntero, lo desrefetencia
	// trae la estructura, y al lado hay un elemento de la estructura
	return 0;
}

