#include <stdio.h>
#define tam 3
int main(int argc, char *argv[]) {
	int i=1;
	int cod;
	int cantp=0;
	int canta=0;
	int cantf=0;
	int cantb=0;
	int otro=0;
	
	printf("\n\n Este programa muestra la cantidad de articulos por rubro\n\n");
	printf("C�digo\n");
	printf("Panader�a:10\n");
	printf("Almacen:20\n");
	printf("Frescos:30\n");
	printf("Bazar:40\n\n");
	
	for( i=1; i<=tam; i++){
		
		printf("\n Ingrese el codigo de articulo %d:",i);
		scanf("%d", &cod);	
		switch(cod){
		case 10:
		cantp++;
			break;
		case 20:
		canta++;
			break;
		case 30:
		cantf++;
			break;
		case 40:
		cantb++;
			break;
		default:
		otro++;
		}	
	}
		printf("Hay %d art�culos de panader�a\n",cantp);
		printf("Hay %d art�culos de almac�n\n",canta);
		printf("Hay %d art�culos de frescos\n",cantf);
		printf("Hay %d art�culos de bazar\n",cantb);
		printf("Hay %d codigos que no tienen clasificacion\n\n", otro);
	

	return 0;
}



