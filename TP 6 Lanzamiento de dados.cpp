#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 36000
int main(int argc, char *argv[]) {
	int tirost[T]= {0};
	srand(time(NULL));
	int sumat;
	int suma_dados = 0;
	for(int i = 1; i <= T; i++){
		sumat=(1+rand()%6)+(1+rand()%6);//esto imprimira numeros desde el 1 hasta el 6
		tirost[sumat]++;
		suma_dados+=1;
	}
	printf("\n\t Suma de los dados\t\t Frecuencia\n");
	
	for(int i = 2; i <= 12; i++){
	
	printf("\t%9d\t\t|", i);
	printf("%18d\n\n", tirost[i]);
	}
	printf("\n Los tiros realizados fueron: %d", suma_dados );
	return 0;
}

