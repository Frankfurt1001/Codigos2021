#include <stdio.h>
//calificador const
void addone (const int *p){// a lo que este apuntando p, en la funcion no puede cambiar
	(*p)++;
}
int main(int argc, char *argv[]) {
	int x = 3;
	addone(&x);
	printf("%d\n", x);
	return 0;
}

