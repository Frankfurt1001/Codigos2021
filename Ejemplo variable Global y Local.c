#include <stdio.h>
int contador(void);
int main(int argc, char *argv[]) {
	int i = 3;//este i ES GLOBAL
	for( int i = 0; i < 5; i++){
	printf("%d\n", contador());//prototipo, OJO, el i del for es completamente diferente del i declarado
	//esta i es LOCAL en las llaves
}
	
	printf("\n%d\n", i);//este i RESPONDE AL GLOBAL
	return 0;
}

int contador(void){
	static int c = 0;
	return c++;
}
