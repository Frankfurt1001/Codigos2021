#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int carga(int *, int *);
int pregunta(int, int, int);
int main(int argc, char *argv[]) {
	int num1,num2;
	srand(time(NULL));
	int res, volver;
	printf("Calculadora para aprender multiplicacion\n");
	do{
		res= carga(&num1,&num2);
		volver= pregunta(res,num1,num2);
	}while(volver!=0);
	return 0;
}

int carga(int *p, int*q){
	int multiplicacion;
	*p = (1+rand()%9);
	*q = (1+rand()%9);
	multiplicacion = (*p) * (*q);
	return multiplicacion;
}
	int  pregunta(int a, int b, int c ){
		int resp;
		int intento;
		do{
			printf("Cual es el resultado de: ");
			printf("%d x %d\n", b, c);
			scanf("%d", &resp);
			if(resp != a)
			printf("\nLa respuesta no es esa, intentalo de nuevo\n\n");
			
		}while(resp != a);
		printf("\n ¡Muy Bien!\n");
		printf("Deseas hacer otro intento?\n");
		do{
			printf("*1 para continuar \n*0 para salir\n");
			scanf("%d", &intento);
		}while( intento > 1 || intento < 0);
		return intento;
	}
		
		
