#include <stdio.h>
struct punto2d{
	float x; //se define uno por renglon unicamente
	float y;// uno por renglon con el tipo
	int z[5];
};//termina en punto y coma
int main(int argc, char *argv[]) {
	struct punto2d p1 = {3,2};//se separa con coma, y si falta un elemento le coloca 0, como en arreglo
	
	//{3,2, {1,2,3,4,5}} se separa con llave como es un arreglo, y se anota los valores
	// inicializadores de signo {.y = 3}, directamente inicia a y con 3
	
	
	printf("(%.2f, %.2f)\n", p1.x, p1.y);
	
	for( int i = 0; i < 5; i++
		printf("%d", pi.z[i])
	return 0;
}

