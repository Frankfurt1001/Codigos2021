#include <stdio.h>
//estructura
struct punto2d{
	float x; //se define uno por renglon unicamente
	float y;// uno por renglon con el tipo
};//termina en punto y coma
int main(int argc, char *argv[]) {
	int var;
	
	struct punto2d p1;//p1 es una variable de tipo struct punto2d, creamos un tipo de variable
	//una vez se declara aqui, recien se asigna el tamaño que tendra aproximadamente segun las variables
	

	p1.x = 3.5;//accedemos a los elementos de la estructura, lo traemos basicamente
	//cada elemento es independiente
	p1.y = 2.1;//p1 es una estructura, accedemos al miembro y, le asignamos un valor
	printf("(%.2f, %.2f)\n", p1.x, p1.y);
	
	struct punto2d p2;//esta estructura tambien tendra un x e y, pero no son los mismos que antes
	return 0;
}

