#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num[2];
	srand(time(NULL));
	int  multiplicacion, res_alum;
	int *a, *b;
	
	printf("Calculadora para aprender multiplicacion\n");
	a = &num[0];
	b = &num[1];
	*a = (1+rand()%9);
	*b = (1+rand()%9);
	
	multiplicacion = (*a)*(*b);
	printf("Cual es el resultado de %d x %d?\n", *a, *b);
	scanf("%d", &res_alum);
	
	if(res_alum==multiplicacion)
		printf("bien echo");
	
	return 0;
}

