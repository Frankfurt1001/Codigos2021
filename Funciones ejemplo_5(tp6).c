#include <stdio.h>
/*#include "kalman.h"
#include "rotation_tools.h"//los .h tienen prototipos unicamente
#include "plotting_tools.h"*/
void carga(int arreglo[], int n);//el orden aqui no importa
int random(void);
void mostrar(int arreglo[], int n);
int main(int argc, char *argv[]) {
	int v[10] = {0};
	carga(v,10);
	mostrar(v,10);
	return 0;
}
void carga(int arreglo[], int n){
	for(int i = 0; i < n; i++){
		arreglo[i] = random();//aqui ya el compilador sabe que random recibe un numero
	}
}
	int random(void)
	{
		int r;
		r = 4;
		return r;
	}
	void mostrar(int arreglo[], int n){
		for(int i = 0; i < n; i++){
			printf("%d\n", arreglo[i]);
		}
	}
			
