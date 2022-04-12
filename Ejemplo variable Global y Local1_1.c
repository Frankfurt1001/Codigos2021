#include <stdio.h>
int contador(void);
int main(int argc, char *argv[]) {
	int i = 3;//este i ES GLOBAL
	{
		int i = 20;
		
		for( int i = 0; i < 5; i++){
			printf("i dentro del for: %d\n", contador());//prototipo, OJO, el i del for es completamente diferente del i declarado
			//esta i es LOCAL en las llaves
		}
		printf("\ni dentro del bloque: %d\n", i);
	}
	printf("\ni dentro del main: %d\n", i);//este i RESPONDE AL GLOBAL
	
	return 0;
}

int contador(void){
	static int c = 0;
	return c++;
}

