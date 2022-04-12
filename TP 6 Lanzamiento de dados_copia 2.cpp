#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 36000
void tiro_dados();
void impresion();
int main(int argc, char *argv[]) {

	srand(time(NULL));
	tiro_dados();
	impresion();
	return 0;
}
void tiro_dados(){
	int tirost[T]= {0};
	int sumat;
	int cant_tiros = 0;
	for(int i = 1; i <= T; i++){
		sumat=(1+rand()%6)+(1+rand()%6);//esto imprimira numeros desde el 1 hasta el 6
		tirost[sumat]++;
		cant_tiros+=1;
		
	}
}
	void impresion(){
		
		printf("\n\t Suma de los dados\t\t Frecuencia\n");
		for(int i = 2; i <= 12; i++){
			printf("\t%9d\t\t|", i);
			printf("%18d\n\n", tirost[i]);
		}
		printf("\n Los tiros realizados fueron: %d", cant_tiros);
		
	}
		/*
		int carga(void)
		{
			static int tiros[T];
			for(int i = 1; i <= T; i++)
			{
				tiros[tiro_dados()]++;
			}
			return tiros[T];
		}*/
