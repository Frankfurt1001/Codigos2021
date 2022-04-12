#include <stdio.h>

int main(int argc, char *argv[]) {
	char nombre[] = "claudio";//aqui se carga solo el 0 al final por ser una cadena
	printf("%lu\n", sizeof nombre);
	printf("%s\n", nombre);
	return 0;
}

