#include <stdio.h>
int c;
int contador(void);

int main(int argc, char *argv[]) {
	for( int i = 0; i < 5; i++){
		printf("%d %d\n", c, contador());
	}/*
	printf("\n");
	for( int i = 0; i < 5; i++){
		printf("%d ", c);
		printf("%d \n", contador());
	}*/
	return 0;
}/*aqui va incrementando c cada vez que es llamada, en c empieza en o pero cada vez que se inicia
en contador incrementa en 1*/
int contador(void){
	static int c = 0;//este c, aunque sea estatico, esconde al C global de arriba de arriba
	return c++;
}
