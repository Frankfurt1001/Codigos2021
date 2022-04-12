#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int encontrado = 0;
	int posicion;
	int i, j;
	int k = 1;
	int filas;
	
	
	printf("Ingrese el numero de alumnos que ingresara: ");
	scanf("%i", &filas);
	
	int mat[filas][4];
	
	printf("Ingrese los datos del alumno:\n");
	
	for( i = 0; i < filas ; i++){//ingreso de lejagos y notas
		for( j = 0; j < 4; j++){
			if (mat[i][0])
			{
				printf("\nIngrese el legajo del alumno %d: ", k);
				scanf("%d", &mat[i][0]);
			}
			
			do{
				printf("Ingrese la nota %d :\n",  k);
				scanf("%d", &mat[i][j]);
				k++;
			}while(k < 4);
			k = 1;
			
		}
		
	}
	//impresion
	for( i = 0; i < filas ; i++){
		for( j = 0; j < 5; j++){
			printf("%5.d", mat[i][j]);
		}
		}
return 0;
}

