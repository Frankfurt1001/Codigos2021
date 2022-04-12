#include <stdio.h>
void imp (int n){
	printf("Ingresa a la funcion donde n vale %d\n", n);
	if(n>1)//va reduciendo 
	imp(n-1);
	
	printf("Sale de la funcion donde n vale %d\n",n);//para imprimir, llega a1 y empieza a aumentar de nuevo
}
	int main(int argc, char *argv[]) {
		imp(5);
		return 0;
	}

