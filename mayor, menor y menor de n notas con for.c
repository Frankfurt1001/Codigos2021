#include <stdio.h>

int main(int argc, char *argv[]) {
	
	printf("\n\n esta calculadora mostrara el mayo, el menor y el promedio de n notas\n\n");
	int  nota, may, min, promedio, cantidad, prom;
	int i=1;
	may=prom=0;
	min=10;
	
	printf("\n\n ingrese la cantidad de notas que va a ingresar\n\n");
	scanf("%d", &cantidad);
	
	for(i=1;i<=cantidad;i++){
		printf("\n\n nota %d\t\t", i);
		
		printf("\n\n ingrese la nota\n\n");
		scanf("%d", &nota);
		
		promedio += nota;
		
		if (nota > may){
			may = nota;
		}
		if (nota< min){
			min = nota;
		}
		printf("\n\tLa nota máxima fue: %d\n",may);
		
		printf("\n\tLa nota mínima fue: %d\n",min);
		
		promedio = promedio / cantidad;
		
		printf("\n\tEl promedio de las %d notas fue: %d\n",cantidad,prom);
		
		
	}
	return 0;
}

