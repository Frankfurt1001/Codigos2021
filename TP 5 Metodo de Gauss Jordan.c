#include <stdio.h>
#define E -0.001
int main(int argc, char *argv[]) {
	//dimensiones de la matriz
	int filas = 0;
	int columnas= 0;
	printf("Ingrese el numero de filas: ");
	scanf("%i", &filas);
	printf("Ingrese el numero de columnas (Matriz Ampliada): ");
	scanf("%i", &columnas);
	
	
	float matriz[filas][columnas];
	
	printf("Ingrese los elementos de la matriz A: \n");
	for( int i = 0; i<filas ; i++){
		for(int j = 0; j<columnas; j++){
			printf("Ingrese el elemento de la posicion  (%i:%i): ", i+1, j+1);
			scanf("%f", &matriz[i][j]);
		}
	}
	//Impresion de la Matriz Inicial
	printf("*Matriz Inicial\n");
	for( int i = 0; i < filas ; i++){
		for(int j = 0; j < columnas; j++){
			if(j == columnas-1){
				printf(" |");
			}
			printf("%5.1f", matriz[i][j]);
		}
		printf("\n");
	}
	//Metodo Gauss Jordan
	float pivote;
	float auxiliar;
	
	for( int i = 0; i<filas ; i++)
	{
		pivote= matriz[i][i];
		for(int j = 0; j < columnas; j++)
		{
			matriz[i][j] /=pivote;
		}
		for(int k = 0;k<filas; k++){
			if(i != k ){
				auxiliar= matriz[k][i];
				for(int j = 0; j<columnas; j++){
					matriz [k][j] -= auxiliar*matriz[i][j];
				}
				
			}
		}
		
	}
	printf("\n");
	//Impresion de la Matriz Resultado
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
		{
			if(j == columnas-1)
				printf(" |");
			printf("%5.2f", matriz[i][j] < -E && matriz[i][j] > E ? 0 : matriz[i][j]);
		}
		printf("\n\n");
	}   
	printf ("\n");
	//Impresion de los resultados de la reduccion
	columnas -=1;
	if (columnas == 2)
	{
		printf("X = %5.2f \n\n", matriz[0][2]);
		printf("Y = %5.2f \n\n", matriz[1][2]);
	}
	if (columnas == 3)
	{
		printf("X = %5.2f \n\n", matriz[0][3]);
		printf("Y = %5.2f \n\n", matriz[1][3]);
		printf("Z = %5.2f \n\n", matriz[2][3]);
	}
	if (columnas == 4)
	{
		printf("X = %5.2f \n\n", matriz[0][4]);
		printf("Y = %5.2f \n\n", matriz[1][4]);
		printf("Z = %5.2f \n\n", matriz[2][4]);
		printf("P = %5.2f \n\n", matriz[3][4]);
	}
	if (columnas == 5)
	{
		printf("X = %5.2f \n\n", matriz[0][5]);
		printf("Y = %5.2f \n\n", matriz[1][5]);
		printf("Z = %5.2f \n\n", matriz[2][5]);
		printf("P = %5.2f \n\n", matriz[3][5]);
		printf("R = %5.2f \n\n", matriz[4][5]);
	}
	if (columnas == 6)
	{
		printf("X = %5.2f \n\n", matriz[0][6]);
		printf("Y = %5.2f \n\n", matriz[1][6]);
		printf("Z = %5.2f \n\n", matriz[2][6]);
		printf("P = %5.2f \n\n", matriz[3][6]);
		printf("R = %5.2f \n\n", matriz[4][6]);
		printf("S = %5.2f \n\n", matriz[5][6]);
	} 
	// y asi sucesivamente segun la cantidad de incognitas que tengamos
	
	return 0;
}

