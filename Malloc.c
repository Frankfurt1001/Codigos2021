#include <stdio.h>
#include <stdlib.h>
void cargar (int *p, int n){
	for(int i = 0; i < n; i++){
		p[i] = i*i;
	}
}
	void imprimir (int *p, int n){
		for(int i = 0; i < n; i++){
		printf("%d\n", *(p+i));
		}
	}
int main(int argc, char *argv[]) {
	int *p;
	int n;
	printf("Cuantos elementos cargara? ");
	scanf("%d", &n);
	
	p = malloc(n* sizeof(int));//le dice que asigne a p el tamaño de un entero de 4 bytes
	//caloc reserva la memoria con el tamaño del tipo deseado, pero los pone en 0, calloc(n, sizeof(int))
	if(p == NULL){//para cuando el tamaño de  reserva solicitado sea muy grande
		printf("No se pudo reservar memoria\n");
		return 1;
	}
	cargar(p,n);
	imprimir(p,n);
	printf("aca cambio\n");
	//realloc necesita el puntero viejo, y el tamaño nuevo que queremos asignarle)
	n=10;
	p = realloc(p, n);
	imprimir(p,n);
	free(p);
	return  0;
}

