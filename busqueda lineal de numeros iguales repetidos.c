#include <stdio.h>

int main(int argc, char *argv[]) {
	int arreglo[5] = {4,8,1,7,1};
	int encontrados[5];
	int busqueda = 1;
	int j;
	for(int i = 0; i<5; i++){ 
		encontrados[i] = -1;
	}
	
	j = 0;
	for (int i = 0; i < 5; i++) {
		if (arreglo[i] == busqueda) {
		encontrados[j++] = i;//guarda la posicion del numero buscado en j, que avanza al igual que i
		}
	}//el j solo se usa para incrementar el valor de encontrados i unicamente(el indice)
	//en i se guardaria 2 4 -1 -1
	for(int i = 0;encontrados[i] != -1; i++){//siempre que encontrados sea diferente de -1 entrara en el for e imprimira el numero y la posicion
		printf("Encontre un %d en la posicion %d\n", busqueda, encontrados[i]);
	}
	if(encontrados[0] == -1){
		printf("No encontre ningun %d\n", busqueda);
	}
	return 0;
}

