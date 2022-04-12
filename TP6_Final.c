#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define T 36000
void carga();
void mostrar();
int main(int argc, char *argv[]) {
	srand(time(NULL));
	carga();
	mostrar();
	return 0;
}
void carga(){
	int suma_dados = 0;
	int suma_t[13] = {0};
	for(int i = 1; i <= T; i++){
	suma_dados =(1+rand()%6)+(1+rand()%6);
	suma_t[suma_dados]++;
	}
}
void mostrar(){
	int suma_t[13];
	int suma_dados = 0;
	printf("\n\t Suma de los dados\t\t Frecuencia\n");
	for(int i = 2; i <= 12; i++){
		printf("\t%9d\t\t|", i);
		printf("%18d\n\n", suma_t[i]);
		
	}
}
