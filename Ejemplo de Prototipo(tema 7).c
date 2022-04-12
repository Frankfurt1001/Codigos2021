#include <stdio.h>
int c=1;//variable global
int contador1(void){//prototipo 1
	int c = 0;
	return c++;
}
	int contador2(void){//prototipo
		int c = 0;
		return ++c;
	}
		int contador3(void){//prototipo
			static int c = 0;/* se le asignara 0 solo la primera vez, y cada vez que se llama a la funcion 
			esto se saltara porque solo sirve para una vez, por defecto las variables
			con static se inicializan en 0 automaticamente*/
			return ++c;
		}
			
	//todo esto se puede poner despues del return, declarando siempre antes del main el prototipo
int main(int argc, char *argv[]) {
	for( int i = 0; i < 5; i++){
		printf("%d\n", contador1());//prototipo 1, imprimira 5 veces 0
	}
	printf("\n");
	for( int i = 0; i < 5; i++){
		printf("%d\n", contador2());//prototipo 2, imprimira 5 veces 1
	}
	printf("\n");
	for( int i = 0; i < 5; i++){
		printf("%d\n", contador3());//prototipo 3, imprimira desde 1 e ira incrementando
	}
	printf("%d\n", c);/*aqui no esta declarada c, por ende no existe, solo existe dentro 
	de los prototipos, y no se pisan unos a otros a pesar de que tengan el mismo nombre*/
	return 0;
}

